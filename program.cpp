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
    cin >> choice;
    while(choice != "q" || choice != "quit"){
        cin >> choice;
        Node* temp = flashcard.m_head;
        cout << temp->m_data << endl;
        if(choice == "next" || choice == "n"){
            if(temp->m_next == nullptr){
                cout << "There is no next card!\n";
            }else{
                temp = temp->m_next;
                cout << "The next card is: " <<temp->m_data << endl;
            }
        }
        if(choice == "p" || choice == "previous"){
            if(temp->m_previous == nullptr){
                cout << "There is no previous card!\n";
            }else{
                temp = temp->m_previous;
                cout << "The previous card is: " << temp->m_data << endl;
            }
        }
    }
    flashcard.printOutCards();
}