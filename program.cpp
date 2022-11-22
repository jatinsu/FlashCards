#include "FlashCards.h"

int main(){
    FlashCards flashcard;
    flashcard.insertCards("This is the content");
    flashcard.insertCards("so like I was thinking");
    flashcard.printOutCards();
}