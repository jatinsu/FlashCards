#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
        Node *m_next;
        // since it's a doubly linked list, you need a pointer for the previous data
        Node *m_previous;
};

class FlashCards{
    public:
        // destructor
        ~FlashCards();
        //prints out the cards
        void printOutCards();
        // insert the cards
        void insertCards();
        // remove the card
        void removeCard();
        // member variables
        int numCards;
        Node *m_head;
        Node *m_tail;
};