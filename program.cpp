#include "FlashCards.h"

int main(){
    FlashCards flashcard;
    flashcard.insertCards("This is the content");
    flashcard.insertCards("so like I was thinking");
    flashcard.insertCards("pslkf;askldf");
    flashcard.printOutCards();
    //flashcard.removeCard(0);
    flashcard.returnNode(2);
}