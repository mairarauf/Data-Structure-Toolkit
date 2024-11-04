#include "Stack.h"

#include <iostream>

bool Stack::isFull()
{
    return STACK.isFull();
}

bool Stack::isEmpty()
{
    return STACK.isEmpty();
}

void Stack::push(int value)
{
    bool insertion = STACK.insertAtEnd(value);
    if (insertion == true)
    {
        top++;
    }
}

void Stack::pop()
{
    bool deletion = STACK.deleteFromEnd();
    if (deletion == true)
    {
        top--;
    }
}

void Stack::getTop()
{
    STACK.getElement(top);
}

void Stack::displayStack()
{
    STACK.display();
}
