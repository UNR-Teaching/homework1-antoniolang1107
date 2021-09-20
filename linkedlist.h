#ifndef LINKED_LIST
#define LINKED_LIST

#include <vector>
#include "listinterface.h"
#include "node.h"

using namespace std;

template<class ItemType>
class LinkedList: public ListInterface<ItemType> {

private:
    Node<ItemType>* headPtr;
    int itemCount;
    Node<ItemType>* getNodeAt(int position) const;
    bool isValid(int position) const;

public:
    LinkedList();
    int getLength() const;
    bool isEmpty() const;
    bool insert(int newPosition, const ItemType& newEntry);
    bool remove(int position);
    void clear();
    ItemType getEntry(int position) const;
    ItemType replace(int position, ItemType& newEntry);
    ~LinkedList();
};  

#include "linkedlist.cpp"
#endif