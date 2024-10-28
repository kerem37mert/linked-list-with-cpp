#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
    LinkedList linkedList;

    const char* asciArt = 
    "======================================\n"
    "||                                  ||\n"
    "||            LINKED LIST           ||\n"
    "||                                  ||\n"
    "======================================\n";

    cout << asciArt << endl << endl;

    bool isRun = true;
    int choice;

    while(isRun) {
        cout << "Yapmak istediğiniz işlemi seçiniz" << endl;
        cin >> choice;

        switch(choice) {
            case 5:     
                break;
            default:
                isRun = false;
        }
    }

    return 0;
}