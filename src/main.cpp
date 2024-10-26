#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
    
    LinkedList linkedList;

    linkedList.prepend(5);
    linkedList.prepend(50);

    cout << linkedList.getHead()->getValue();

    return 0;
}