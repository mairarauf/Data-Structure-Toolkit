#ifndef STACK_H
#define STACK_H
#include "Array.h"


class Stack
{
    private:
        Array STACK;
        int top = -1;

    public:
        bool isFull();
        bool isEmpty();

        void push(int);
        void pop();

        void getTop();
        void displayStack();
};

#endif // STACK_H
