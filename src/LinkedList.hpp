#include "Node.hpp"

class LinkedList {
private:
    Node* head;

    Node* createNode(int value, Node* next);

public:

    LinkedList();

    Node* getHead();

    void traversal();

    void prepend(int value);

    void append(int value);

    void removeFirst();
};