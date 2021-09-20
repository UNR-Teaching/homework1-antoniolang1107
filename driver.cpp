#include <iostream>
#include "node.h"
#include "linkedlist.h"

void displayVector(std::vector<string>); // change to LinkedList functionality

int main()  {
    int selection, position;
    LinkedList<string> taskList;
    std::vector<string> taskListVect;
    string task;

    do {
        std::cout << "Menu\n";
        std::cout << "1. Add Task\n"
                  << "2. Complete Task\n"
                  << "3. Display List\n"
                  << "4. Complete List\n"
                  << "0. Exit\n";
        std::cin >> selection;

        taskListVect = taskList.toVector();

        switch (selection) {
            case 1:
                displayVector(taskListVect);
                std::cout << "What is the priority of your task?" << std::endl;
                std::cin >> position;
                    // check validity
                std::cin.ignore(1000,'\n');
                std::cout << "What is your new task" << std::endl;
                std::getline(std::cin, task);
                taskList.add(task); // change linkedlist.add to take position value
                std::cin.ignore(1000,'\n'); // change
                break;

            case 2:
                displayVector(taskListVect);
                std::cout << "Please select which task you've completed:" << std::endl;
                cin >> position;
                    // check validity
                std::cout << "Completed: " << std::endl; // output completed task
                // remove task
                break;

            case 3:
                displayVector(taskListVect);
                break;

            case 4:
                taskList.clear();
                std::cout << "Congradulations! List complete!" << std::endl;
                break;

            default:
                break;
        }
    }
    while (selection != 0);

    return 0;
}

void displayVector(std::vector<string> vect) {
    for(int i = 1; i < vect.size(); i++) {
        std::cout << i+1 << ". " << vect[i] << std::endl;
    }
}