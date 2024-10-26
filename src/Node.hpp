#ifndef NODE_HPP 
#define NODE_HPP

class Node {
public:
    int value;    
    Node* next;   


    Node(int value);

    void setValue(int value);

    void setNext(Node* node);
};


#endif
