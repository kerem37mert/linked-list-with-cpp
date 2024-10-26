#include "Node.hpp"

Node::Node() {
    this->setNext(nullptr);
}

void Node::setValue(int value) {
    this->value = value;
}

int Node::getValue() {
    return this->value;
}

void Node::setNext(Node* node) {
    this->next = node;
}   

Node* Node::getNext() {
    return this->next;
}
