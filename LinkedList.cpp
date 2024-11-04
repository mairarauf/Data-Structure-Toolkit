#include "LinkedList.h"
#include <iostream>

void LinkedList::setHead(Node* head)
{
    this->head = head;
}

Node* LinkedList::getHead()
{
    return this->head;
}

LinkedList::LinkedList()
{
    this->setHead(nullptr);
}

void LinkedList::insertAtStart(int data)
{
    Node* newNode = new Node(data);
    if (this->getHead() != nullptr)
    {
        newNode->setNext(this->getHead());
    }
    this->setHead(newNode);
}

void LinkedList::insertAtEnd(int data)
{
    if (this->getHead() == nullptr)
    {
        this->insertAtStart(data);
        return;
    }

    Node* newNode = new Node(data);
    Node* traversePtr = this->getHead();
    while (traversePtr->getNext())
    {
        traversePtr = traversePtr->getNext();
    }
    traversePtr->setNext(newNode);
}

void LinkedList::insertAtPosition(int value, int position)
{
    if (position == 1)
    {
        this->insertAtStart(value);
        return;
    }
    else
    {
        Node* insertAt = this->getHead();
        int Position = 0;
        while (insertAt)
        {
            Position++;
            if (Position == position)
            {
                int temp = insertAt->getData();
                insertAt->setData(value);
                Node* newNode = new Node(temp);
                newNode->setNext(insertAt->getNext());
                insertAt->setNext(newNode);
                return;
            }
            insertAt = insertAt->getNext();
        }
        std::cout << "Position not found." << std::endl;
    }
}

void LinkedList::deleteFromStart()
{
    if (this->getHead() == nullptr)
    {
        std::cout << "No element found." << std::endl;
        return;
    }
    Node* deletePtr = this->getHead();
    this->setHead(this->getHead()->getNext());
    delete deletePtr;
}

void LinkedList::deleteFromLast()
 {
     if (this->getHead() == nullptr || this->getHead()->getNext() == nullptr)
     {
         this->deleteFromStart();
         return;
     }
     Node* last = this->getHead();
     Node* pre = nullptr;
     while (last->getNext())
     {
         pre = last;
         last = last->getNext();
     }
     pre->setNext(nullptr);
     delete last;
 }

void LinkedList::deleteBySearch(int target)
{
    Node* searchPtr = this->getHead();
    Node* pre = nullptr;
    while (searchPtr)
    {
       if (searchPtr->getData() == target)
       {
           pre->setNext(searchPtr->getNext());
           delete searchPtr;
           return;
       }
       pre = searchPtr;
       searchPtr = searchPtr->getNext();
    }
    std::cout << "Element not found." << std::endl;
}

void LinkedList::Search(int target)
 {
     Node* searchPtr = this->getHead();
     int position = 0;
     while (searchPtr)
     {
         position++;
         if (searchPtr->getData() == target)
         {
             std::cout << "Target is at position " << position << std::endl;
             return;
         }
         searchPtr = searchPtr->getNext();
     }
     std::cout << "Element not found." << std::endl;
 }

bool LinkedList::isSorted()
{
    Node* temp = this->getHead();
    while (temp->getNext())
    {
        if (temp->getData() > temp->getNext()->getData())
        {
            return false;
        }
        temp = temp->getNext();
    }
    return true;
}


void LinkedList::display()
{
    Node* displayPtr = this->getHead();
    while (displayPtr)
    {
        std::cout << displayPtr->getData() << std::endl;
        displayPtr = displayPtr->getNext();
    }
}
