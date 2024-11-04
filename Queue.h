#ifndef QUEUE_H
#define QUEUE_H
#include "Array.h"


class Queue
{
    private:
        Array QUEUE;

    public:
        bool isFull();
        bool isEmpty();

        void enQueue(int);
        void deQueue();
        void getFront();

        void displayQueue();
};

#endif // QUEUE_H
