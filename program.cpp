#include "FlashCards.h"

int main(){
    FlashCards flashcard;
    flashcard.insertCards("This is the content");
    flashcard.insertCards("so like I was thinking");
    flashcard.insertCards("pslkf;askldf");
    cout << "Before removal: " << endl;
    flashcard.printOutCards();
    flashcard.removeCard(1);
    cout << "After removal: " << endl;
    flashcard.printOutCards();
}