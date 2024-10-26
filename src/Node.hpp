#ifndef NODE_HPP 
#define NODE_HPP

class Node {
private:
    int value;    
    Node* next;   

public:
    Node();

    void setValue(int value);

    int getValue();

    void setNext(Node* node);

    Node* getNext();

};


#endif
