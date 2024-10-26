#include "LinkedList.hpp"

LinkedList::LinkedList() {
    this->head = nullptr;
}

Node* LinkedList::getHead() {
    return this->head;
}

Node* LinkedList::createNode(int value, Node* next) {
    Node* node = new Node();
    node->setValue(value);
    node->setNext(next);

    return node;
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

void LinkedList::removeFirst() {
    if(this->head == nullptr)
        return;
    
    Node* tmp = this->head->getNext();
    delete this->head;
    this->head = tmp;
}