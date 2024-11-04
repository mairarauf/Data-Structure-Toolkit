#include "List.h"

bool List::isFull()
{
    return LIST.isFull();
}

bool List::isEmpty()
{
    return LIST.isEmpty();
}

bool List::isSorted()
{
    return LIST.isSorted();
}

void List::ascending()
{
    LIST.insertionSort();
}

void List::descending()
{
    LIST.bubbleSort();
}

void List::append(int value)
{
    LIST.insertAtEnd(value);
}

void List::Insert(int value, int index)
{
    LIST.insertInMiddle(value, index);
}


void List::Remove(int target)
{
    LIST.deleteBySearch(target);
}

void List::displayList()
{
    LIST.display();
}
