#include "List1.h"
#include <iostream>

List1::List1(int maxSize)
{
    this->maxSize = maxSize;
    this->currentSize = 0;
}

bool List1::isFull()
{
    if (this->currentSize == this->maxSize)
    {
        return true;
    }
    return false;
}

bool List1::isEmpty()
{
    if (this->currentSize == 0)
    {
        return true;
    }
    return false;
}

void List1::append(int value)
{
    bool status = isFull();
    if (status == true)
    {
        std::cout << "Oops.... List is Full" << std::endl;
    }
    else
    {
        LIST.insertAtEnd(value);
        currentSize++;
    }
}

void List1::Insert(int value, int position)
{
    bool status = isFull();
    if (status == true)
    {
        std::cout << "Oops.... List is Full." << std::endl;
    }
    else
    {
        LIST.insertAtPosition(value, position);
        currentSize++;
    }
}

void List1::Remove(int target)
{
    bool status = isEmpty();
    if (status == true)
    {
        std::cout << "Oops.... List is Empty." << std::endl;
    }
    else
    {
        LIST.deleteBySearch(target);
        currentSize--;
    }
}

bool List1::isSorted()
{
    return LIST.isSorted();
}

void List1::displayList()
{
    LIST.display();
}
