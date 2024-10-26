#include "Node.hpp"

Node::Node(int value) {
    this->setValue(value);
    this->setNext(nullptr);
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setNext(Node* node) {
    this->next = node;
}   