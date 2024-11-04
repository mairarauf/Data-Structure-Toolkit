#include "Stack1.h"
#include <iostream>

Stack1::Stack1(int maxSize)
{
    this->maxSize = maxSize;
    this->currentSize = 0;
}

bool Stack1::isFull()
{
    if (this->currentSize == this->maxSize)
    {
        return true;
    }
    return false;
}

bool Stack1::isEmpty()
{
    if (this->currentSize == 0)
    {
        return true;
    }
    return false;
}

void Stack1::push(int value)
{
    bool status = isFull();
    if (status == true)
    {
        std::cout << "Oops.... Stack is Full" << std::endl;
    }
    else
    {
        STACK.insertAtEnd(value);
        currentSize++;
    }
}

void Stack1::pop()
{
    bool status = isEmpty();
    if (status == true)
    {
        std::cout << "Oops.... Stack is Empty." << std::endl;
    }
    else
    {
        STACK.deleteFromLast();
        currentSize--;
    }
}

void Stack1::displayStack()
{
    STACK.display();
}
