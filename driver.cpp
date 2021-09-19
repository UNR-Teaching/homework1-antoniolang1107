#include <iostream>
#include "node.h"
#include "linkedlist.h"

int main()  {
    int selection;

    do {
        std::cout << "Menu\n";
        std::cout << "1. Add Task\n"
                  << "2. Complete Task\n"
                  << "3. Display List\n"
                  << "4. Complete List\n"
                  << "0. Exit\n";
        std::cin >> selection;


        switch (selection) {
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            default:
                break;
        }
    }
    while (selection != 0);

    return 0;
}