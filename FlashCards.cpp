#include "FlashCards.h"

// the destructor
FlashCards::~FlashCards(){
    Node* temp = nullptr;
    while(m_head != nullptr){
        temp = m_head;
        m_head = m_head->m_next;
        delete temp;
    }
    m_head = nullptr;
    m_head = nullptr;
    numCards = 0;
}

void FlashCards::printOutCards(){

}

void FlashCards::insertCards(){

}

void FlashCards::removeCard(){

}

int main(){

}