#include "Node.hpp"

class LinkedList {
private:
    Node* head;

    Node* createNode(int value, Node* next);

public:

    LinkedList();

    Node* getHead();

    void traversal();

    unsigned int len();

    void prepend(int value);

    void append(int value);

    bool removeFirst();

    bool removeEnd();   

    bool removeIndex(unsigned int index);
};