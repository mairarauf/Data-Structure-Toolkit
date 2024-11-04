#ifndef QUEUE1_H
#define QUEUE1_H
#include "LinkedList.h"


class Queue1
{
    private:
        LinkedList QUEUE;
        int maxSize;
        int currentSize;

    public:
        Queue1(int);
        bool isFull();
        bool isEmpty();

        void enQueue(int);
        void deQueue();
        void DisplayQueue();
};

#endif // QUEUE1_H
