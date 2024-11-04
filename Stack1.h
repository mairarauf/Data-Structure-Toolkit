#ifndef STACK1_H
#define STACK1_H
#include "LinkedList.h"


class Stack1
{
    private:
        LinkedList STACK;
        int maxSize;
        int currentSize;

    public:
        Stack1(int);
        bool isFull();
        bool isEmpty();

        void push(int);
        void pop();
        void displayStack();
};

#endif // STACK1_H
