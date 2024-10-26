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