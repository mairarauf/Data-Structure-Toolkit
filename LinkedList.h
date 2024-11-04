#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"


class LinkedList
{
    private:
        Node* head;

    public:
        void setHead(Node*);
        Node* getHead();

        LinkedList();

        void insertAtStart(int);
        void insertAtEnd(int);
        void insertAtPosition(int, int);

        void deleteFromStart();
        void deleteFromLast();
        void deleteBySearch(int);

        void Search(int);
        bool isSorted();

        void display();
};

#endif // LINKEDLIST_H
