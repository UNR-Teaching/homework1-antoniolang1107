#ifndef LIST_INTERFACE 
#define LIST_INTERFACE 
#include <vector>

using namespace std;

template<class ItemType> class ListInterface { 
    public:
    virtual int getCurrentSize() const = 0;
    virtual bool isEmpty() const = 0; 
    virtual bool add(const ItemType& newEntry) = 0;
    virtual bool remove(const ItemType& newEntry) = 0;
    virtual void clear() = 0;
    virtual int getFrequencyOf(const ItemType& newEntry) const = 0;
    virtual bool contains(const ItemType& newEntry) const = 0;
    virtual vector<ItemType> toVector() const = 0;
    virtual ~ListInterface() { }
};

#endif