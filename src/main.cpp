#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
    
    LinkedList linkedList;

    linkedList.append(5);   
    linkedList.append(55); 
    linkedList.removeFirst();
    linkedList.removeFirst();

    cout << linkedList.getHead();

    return 0;
}