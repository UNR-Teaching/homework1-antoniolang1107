#include <iostream>
#include "node.h"
#include "linkedlist.h"

int main()  {
    int selection, position;
    //LinkedList<string>::LinkedList<string>* taskList = new LinkedList<string>::LinkedList();
    LinkedList<string>* taskList = new LinkedList<string>::LinkedList();
    string task;

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
                std::cout << "What is the priority of your task?" << std::endl;
                std::cin >> position;
                std::cin.ignore(1000,'\n');
                std::cout << "What is your new task" << std::endl;
                std::getline(std::cin, task);
                taskList->insert(position, task);
                std::cin.ignore(1000,'\n'); // change
                break;

            case 2:
                std::cout << "Please select which task you've completed:" << std::endl;
                cin >> position;
                    // check validity
                std::cout << "Completed: " << std::endl; // output completed task
                // remove task
                break;

            case 3:
                break;

            case 4:
                taskList->clear();
                std::cout << "Congradulations! List complete!" << std::endl;
                break;

            default:
                break;
        }
    }
    while (selection != 0);

    return 0;
}