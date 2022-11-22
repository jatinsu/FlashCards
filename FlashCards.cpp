#include "FlashCards.h"

FlashCards::FlashCards(){
    numCards = 0;
    m_head = nullptr;
    m_tail = nullptr;
}

// the destructor
FlashCards::~FlashCards(){
    if(m_head != nullptr){
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
}

void FlashCards::printOutCards(){
    Node* temp = m_head;
    while(temp != nullptr){
        cout << temp->m_data << endl;
        temp = temp->m_next;
    }
}

// since it's going to always add it to the end, we won't have to worry about searching and inserting it randomly throughout, thus having O(n) complexity
void FlashCards::insertCards(string data){
    Node* newData = new Node();
    Node* temp = m_head;
    newData->m_data = data;
    // Set the next pointer of newData to nullptr since it's the last node in the data set
    newData->m_next = nullptr;
    // check if the linked list is empty, if it is then set the m_previous to null and make the head the new data set
    if(m_head == nullptr){
        newData->m_previous = nullptr;
        m_head = newData;
        m_head->m_next = nullptr;
        numCards++;
        return;
    }
    while(temp->m_next != nullptr){
        temp = temp->m_next;
    }
    temp->m_next = newData;
    newData->m_previous = temp;
    numCards++;
}


void FlashCards::removeCard(){

}