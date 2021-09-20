#include <iostream>
#include "node.h"
#include "linkedlist.h"

void displayList(LinkedList<string> list);

int main()  {
    int selection, position;
    LinkedList<string> taskList;
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
                displayList(taskList);
                std::cout << "What is the priority of your task?" << std::endl;
                std::cin >> position;
                std::cin.ignore(10,'\n');
                std::cout << "What is your new task" << std::endl;
                std::getline(std::cin, task);
                taskList.insert(position, task);
                std::cin.ignore(10, '\n');
                break;

            case 2:
                displayList(taskList);
                std::cout << "Please select which task you've completed:" << std::endl;
                std::cin >> position;
                std::cout << "Completed: " + taskList.getEntry(position) << std::endl;
                taskList.remove(position);
                break;

            case 3:
                displayList(taskList);
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

void displayList(LinkedList<string> list) {
    if (list.isEmpty()) {
        std::cout << "No tasks currently!" << std::endl;
    }
    else {
        for (int i = 1; i <= list.getLength(); i++) {
            std::cout << i << ". " + list.getEntry(i) << std::endl;
        }
    }

    
}