#ifndef LIST1_H
#define LIST1_H
#include "LinkedList.h"


class List1
{
    private:
        LinkedList LIST;
        int maxSize;
        int currentSize;

    public:
        List1(int);
        bool isFull();
        bool isEmpty();
        void append(int);
        void Insert(int, int);
        void Remove(int);
        bool isSorted();
        void displayList();
};

#endif // LIST1_H
