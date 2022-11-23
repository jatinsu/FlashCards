#include "FlashCards.h"

int main(){
    FlashCards flashcard;
    int numberOfCards;
    string card;
    cout << "Welcome to FlashCards!\n";
    cout << "How many flash cards are you going to make? ";
    cin >> numberOfCards;
    for(int i = 0;i < numberOfCards; i++){
        cout << "Enter the card you want to insert: ";
        cin >> card;
        flashcard.insertCards(card);
    }
    flashcard.printOutCards();
}