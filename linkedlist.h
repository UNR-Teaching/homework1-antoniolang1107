#ifndef LINKED_LIST
#define LINKED_LIST

#include <vector>
using namespace std;
#include "listinterface.h"
#include "node.h"

template<class ItemType>
class LinkedList: public ListInterface<ItemType> {

private:
    Node<ItemType>* headPtr;
    int itemCount;

public:
    LinkedList();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& newEntry);
    void clear();
    int getFrequencyOf(const ItemType& newEntry) const;
    bool contains(const ItemType& newEntry) const;
    vector<ItemType> toVector() const;
    ~LinkedList();
};  

#include "linkedlist.cpp"
#endif