#include <iostream>
#include "LinkedList.hpp"

using namespace std;

LinkedList::LinkedList() {
    this->head = nullptr;
}

Node* LinkedList::createNode(int value, Node* next) {
    Node* node = new Node();
    node->setValue(value);
    node->setNext(next);

    return node;
}

Node* LinkedList::getHead() {
    if(this->head == nullptr)
        return nullptr;
    return this->head;
}

void LinkedList::traversal() {
    Node* tmp = this->head;

    while(tmp != nullptr) {
        cout << tmp->getValue();
        if(tmp->getNext() != nullptr)
            cout << "->";
        else 
            cout << endl;
        tmp = tmp->getNext();
    }
}

void LinkedList::prepend(int value) {
    Node* node = this->createNode(value, this->head);
    this->head = node;
}

void LinkedList::append(int value) {
    Node* node = this->createNode(value, nullptr);
    Node* tmp = this->head;

    if(tmp == nullptr)
        this->head = node;
    else {
        while(tmp->getNext() != nullptr)
            tmp = tmp->getNext();

        tmp->setNext(node);
    }
}

bool LinkedList::removeFirst() {
    if(this->head == nullptr)
        return false;
    
    Node* tmp = this->head->getNext();
    delete this->head;
    this->head = tmp;

    return true;
}

bool LinkedList::removeIndex(unsigned int index) {
    Node* tmp = this->head;

    if(index == 0)
        return this->removeFirst();

    for(int i=0; i<index-1; i++) {
        if(tmp == nullptr)
            return false;
        tmp = tmp->getNext();
    }

    if(tmp== nullptr || tmp->getNext() == nullptr)
        return false;

    Node* tmp2 = tmp;
    tmp->setNext(tmp2->getNext());
    delete tmp2;

    return true;
}