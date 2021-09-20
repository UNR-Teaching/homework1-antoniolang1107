template<class ItemType>
LinkedList<ItemType>::LinkedList() {
    itemCount = 0;
    headPtr = nullptr;
}

template<class ItemType>
bool LinkedList<ItemType>::isValid(int position) const {
    return position > 0 && position < itemCount+1;
}

template<class ItemType>
Node<ItemType>* LinkedList<ItemType>::getNodeAt(int position) const {
    if (isValid(position)) {
    Node<ItemType>* curPtr = headPtr;

        for (int i = 1; i <= position && curPtr != nullptr; i++) {
            curPtr = curPtr->getNext();
        }

        return curPtr;
    }

    return nullptr;
}

template<class ItemType>
int LinkedList<ItemType>::getLength() const {
    return itemCount;
}

template<class ItemType>
bool LinkedList<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry) {
    Node<ItemType>* tempPtr;
    Node<ItemType>* newNodePtr = new Node<ItemType>();
    newNodePtr->setItem(newEntry);

    if (newPosition == 1) {
        tempPtr = headPtr;
        headPtr = newNodePtr;
        newNodePtr->setNext(tempPtr);

        itemCount++;
        return true;
    }

    else {
        Node<ItemType>* prevNode = getNodeAt(newPosition);
        tempPtr = prevNode->getNext();
        prevNode->setNext(newNodePtr);
        newNodePtr->setNext(tempPtr);

        itemCount++;
        return true;
    }
    return false;
}

template<class ItemType>
bool LinkedList<ItemType>::remove(int position) {
    Node<ItemType>* tempPtr;
    if (position == 1) {
        tempPtr = headPtr;
        headPtr = headPtr->getNext();
        delete tempPtr;
    }

    else {
        tempPtr = getNodeAt(position);
    }

    return false;
}
        
template<class ItemType>
void LinkedList<ItemType>::clear() {
    Node<ItemType>* nodeToDeletePtr = headPtr;
    while(headPtr != nullptr) {
        headPtr = headPtr->getNext();
        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = headPtr;
    }
    itemCount = 0;
}
template<class ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const {
    return getNodeAt(position)->getItem();
}

template<class ItemType>
ItemType LinkedList<ItemType>::replace(int position, const ItemType& newEntry) {
    string tempStr = getNodeAt(position)->getItem();
    getNodeAt(position)->setItem(newEntry);
    return tempStr;
}

template<class ItemType>
LinkedList<ItemType>::~LinkedList() {
    clear();
}