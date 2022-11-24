#include "FlashCards.h"

int main(){
    FlashCards flashcard;
    int numberOfCards = 0, input = 0, cardToRemove;
    bool checkIfNew = false;
    string choice = "", choice1;
    Node*temp;
    cout << "Welcome to FlashCards!\n";
    while(input != 5){
        cout << "\nFlashCard Menu:\n";
        cout << "1. Create New flashcards\n2. Display all flashcards\n3. Go through flashcards 1 by 1\n4. Delete a FlashCard\n5. Exit\n";
        cin >> input;
        cin.ignore();
        switch(input){
        case 1:
            if(checkIfNew){
                cout << "Are you sure you want to clear your current set of cards? (y/n)";
                cin >> choice1;
                cin.ignore();
                if(choice1 == "n"){
                    break;
                }
            }
            flashcard.clear();
            cout << "How many flash cards are you going to make? ";
            cin >> numberOfCards;
            cin.ignore();
            for(int i = 0;i < numberOfCards; i++){
                cout << "Enter the card you want to insert: ";
                getline(cin, choice);
                if(choice.length() == 0){
                    cout << "You have to enter information in the card!\n";
                    i--;
                }else{
                    flashcard.insertCards(choice);
                }
            }
            checkIfNew = true;
            break;
        case 2:
            if(flashcard.m_head == nullptr){
                cout << "You forgot to insert cards!\n";
                break;
            }
            flashcard.printOutCards();
            break;
        case 3:
            if(flashcard.m_head == nullptr){
                cout << "You forgot to insert cards!\n";
                break;  
            } 
            temp = flashcard.m_head;
            cout << "Entered printing one by one mode\n";
            while(choice != "q" || choice != "quit"){
                if(choice == "q" || choice == "quit"){
                    break;
                }
                temp = flashcard.printOne(choice, temp);
                getline(cin, choice);
            }
            break;
        case 4:
            if(flashcard.m_head == nullptr){
                cout << "You forgot to insert cards!\n";
                break;  
            } 
            flashcard.printOutCards();
            cout << "Which FlashCard would you like to remove? ";
            cin >> cardToRemove;
            cin.ignore();
            flashcard.removeCard(cardToRemove);
            break;
        case 5:
            cout << "Thank you for playing!\n";
            return 0;
        default:
            cout << "Please enter a number 1-5!\n";
        }
    }
}