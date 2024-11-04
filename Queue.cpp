#include "Queue.h"

bool Queue::isFull()
{
    return QUEUE.isFull();
}

bool Queue::isEmpty()
{
    return QUEUE.isEmpty();
}

void Queue::enQueue(int value)
{
    QUEUE.insertAtEnd(value);
}

void Queue::deQueue()
{
    QUEUE.deleteFromStart();
}

void Queue::getFront()
{
    bool status = isEmpty();
    if (status == false)
    {
        QUEUE.getElement(0);
    }
}

void Queue::displayQueue()
{
    QUEUE.display();
}
