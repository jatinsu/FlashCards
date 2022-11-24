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
    int counter = 1;
    while(temp != nullptr){
        cout << counter << ". " << temp->m_data << endl;
        counter++;
        temp = temp->m_next;
    }
}

void FlashCards::printOne(string choice){

        
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


void FlashCards::removeCard(int index){
    // check to see if the list is empty
    if(m_head == nullptr){
        return;
    }
    //check if the index is the first node, so it'll only remove the head
    if(index == 0){
        Node *temp = m_head;
        m_head = m_head->m_next;
        delete temp;
        numCards--;
        return;
    }
    // check if the index is the last node, so it'll only remove the tail
    if(index == numCards){
        Node* tailTemp = m_tail;
        m_tail = m_tail->m_previous;
        delete tailTemp;
        m_tail->m_next = nullptr;
        numCards--;
        return;
    }else{
        Node *current = returnNode(index);
        // if it's somewhere in the middle, then set the previous->next to next and vice versa
        current->m_previous->m_next = current->m_next;
        if(current->m_next != nullptr){
            current->m_next->m_previous = current->m_previous;
        }
        current = nullptr;
        delete current;
    }
}

// Really only used for removeCard, but lets you return a node based on the index
Node* FlashCards::returnNode(int index){
    if(m_head == nullptr){
        return nullptr;
    }
    Node* nodeToReturn = m_head;
    for(int i = 0; i < index; i++){
        nodeToReturn = nodeToReturn->m_next;
    }
    return nodeToReturn;
}