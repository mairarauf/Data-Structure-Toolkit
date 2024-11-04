#ifndef LIST_H
#define LIST_H
#include "Array.h"


class List
{
    private:
        Array LIST;

    public:
        bool isFull();
        bool isEmpty();
        bool isSorted();

        void ascending();
        void descending();

        void append(int);
        void Insert(int, int);

        void Remove(int);

        void displayList();
};

#endif // LIST_H
