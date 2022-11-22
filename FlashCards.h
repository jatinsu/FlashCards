#include <iostream>
#include <string>
using namespace std;
class Node{
    public:
        // The data of the string
        string m_data;
        Node *m_next;
        // since it's a doubly linked list, you need a pointer for the previous data
        Node *m_previous;
};

class FlashCards{
    friend class Node;
    public:
        // destructor
        ~FlashCards();
        //prints out the cards
        void printOutCards();
        // insert the cards
        void insertCards(string data);
        // remove the card
        void removeCard();
        // member variables
        int numCards;
        Node *m_head;
        Node *m_tail;
};