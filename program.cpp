#include "FlashCards.h"

int main(){
    FlashCards flashcard;
    int numberOfCards;
    string choice;
    string card;
    cout << "Welcome to FlashCards!\n";
    cout << "How many flash cards are you going to make? ";
    cin >> numberOfCards;
    for(int i = 0;i < numberOfCards; i++){
        cout << "Enter the card you want to insert: ";
        cin >> card;
        flashcard.insertCards(card);
    }
    
    cout << "Entered printing one by one mode\n";
    Node* temp = flashcard.m_head;
    cin >> choice;
    while(choice != "q" || choice != "quit"){
        if(choice == "q" || choice == "quit"){
            break;
        }
        temp = flashcard.printOne(choice, temp);
        cin >> choice;
    }
    flashcard.printOutCards();
}