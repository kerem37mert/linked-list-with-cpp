#include "Node.hpp"

class LinkedList {
private:
    Node* head;

    Node* createNode(int value, Node* next);

public:

    LinkedList();

    Node* getHead();

    void prepend(int value);
};