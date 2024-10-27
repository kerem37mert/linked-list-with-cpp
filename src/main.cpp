#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
    
    LinkedList linkedList;

    linkedList.append(5);   
    linkedList.append(10); 
    linkedList.append(15);   
    linkedList.append(20); 
    linkedList.append(25);   
    linkedList.append(30); 

    linkedList.traversal();
    linkedList.removeIndex(6);
    linkedList.traversal();

    return 0;
}