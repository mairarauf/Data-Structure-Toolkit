#include "Queue1.h"

#include <iostream>

Queue1::Queue1(int maxSize)
{
    this->maxSize = maxSize;
    this->currentSize = 0;
}

bool Queue1::isFull()
{
    if (this->currentSize == this->maxSize)
    {
        return true;
    }
    return false;
}

bool Queue1::isEmpty()
{
    if (this->currentSize == 0)
    {
        return true;
    }
    return false;
}

void Queue1::enQueue(int value)
{
    bool status = isFull();
    if (status == true)
    {
        std::cout << "Oops.... Queue is Full" << std::endl;
    }
    else
    {
        QUEUE.insertAtEnd(value);
        currentSize++;
    }
}

void Queue1::deQueue()
{
    bool status = isEmpty();
    if (status == true)
    {
        std::cout << "Oops.... Queue is Empty." << std::endl;
    }
    else
    {
        QUEUE.deleteFromStart();
        currentSize--;
    }
}

void Queue1::DisplayQueue()
{
    QUEUE.display();
}
