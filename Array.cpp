#include "Array.h"

#include <iostream>

Array::Array() : currentSize(0) {};

void Array::initializeArray()
{
    for (int i=0; i<10; i++)
    {
        this->myArray[i] = 0;
    }
}

bool Array::isSorted()
{
    for (int i=0; i<currentSize-1; i++)
    {
        if (this->myArray[i] > this->myArray[i+1])
        {
            return false;
        }
    }
    return true;
}

bool Array::isFull()
{
    if (this->currentSize == 10)
    {
        return true;
    }
    return false;
}

bool Array::isEmpty()
{
    if (this->currentSize == 0)
    {
        return true;
    }
    return false;
}

void Array::Swap(int index1, int index2)
{
    this->myArray[index1] = this->myArray[index1] + this->myArray[index2];
    this->myArray[index2] = this->myArray[index1] - this->myArray[index2];
    this->myArray[index1] = this->myArray[index1] - this->myArray[index2];
}

void Array::leftShift(int index = 0)
{
    for (int i=index; i<currentSize-1; i++)
    {
        this->myArray[i] = this->myArray[i+1];
    }
    myArray[currentSize-1] = 0;
}

void Array::rightShift(int index = 0)
{
    for (int i=currentSize; i>index; i--)
    {
        this->myArray[i] = this->myArray[i-1];
    }
    myArray[index] = 0;
}

void Array::leftRotate()
{
    int temp = this->myArray[0];
    this->leftShift();
    myArray[currentSize-1] = temp;
}

void Array::rightRotate()
{
    int temp = this->myArray[currentSize-1];
    this->rightShift();
    myArray[0] = temp;
}

void Array::getElement(int index)
{
    if (index >= currentSize)
    {
        std::cout << "Wrong index entered." << std::endl;
        return;
    }
    std::cout << myArray[index] << std::endl;
}

bool Array::insertAtStart(int value)
{
    bool status = this->isFull();
    if (status == true)
    {
        std::cout << "Can't insert more elements" << std::endl;
        return false;
    }
    else
    {
        this->rightShift();
        this->myArray[0] = value;
        currentSize++;
        return true;
    }
}

bool Array::insertAtEnd(int value)
{
    bool status = this->isFull();
    if (status == true)
    {
        std::cout << "Can't insert more elements." << std::endl;
        return false;
    }
    else
    {
        this->myArray[currentSize] = value;
        currentSize++;
        return true;
    }
}

void Array::insertInMiddle(int value, int index)
{
    bool status = isFull();
    if (status == true)
    {
        std::cout << "Can't insert more elements." << std::endl;
    }
    else if (index > currentSize)
    {
        std::cout << "Wrong index entered." << std::endl;
    }
    else
    {
        rightShift(index);
        this->myArray[index] = value;
        currentSize++;
    }
}

int Array::linearSearch(int target)
{
    for (int i=0; i<currentSize; i++)
    {
        if (this->myArray[i] == target)
        {
            return i;
        }
    }
    std::cout << "Element not found." << std::endl;
    return -1;
}

int Array::binarySearch(int target)
{
    bool status = this->isSorted();
    if (status == true)
    {
        int lb = 0;
        int ub = currentSize-1;
        int mid = (ub + lb) / 2;

        while (ub >= lb)
        {
            if (this->myArray[mid] == target)
            {
                return mid;
            }
            else if (this->myArray[mid] > target)
            {
                ub = mid -1;
                mid = (ub + lb) / 2;
            }
            else
            {
                lb = mid + 1;
                mid = (ub + lb) / 2;
            }
        }
    }
    else
    {
        std::cout << "Can't apply binary search." << std::endl;
        return -1;
    }
}

bool Array::deleteFromStart()
{
    bool status = isEmpty();
    if (status == true)
    {
        std::cout << "No element present." << std::endl;
        return false;
    }
    else
    {
        this->leftShift();
        currentSize--;
        return true;
    }
}

bool Array::deleteFromEnd()
{
    bool status = isEmpty();
    if (status == true)
    {
        std::cout << "No element present." << std::endl;
        return false;
    }
    else
    {
        this->myArray[currentSize-1] = 0;
        currentSize--;
        return true;
    }
}

void Array::deleteBySearch(int target)
{
    bool status = isEmpty();
    int index = -1;
    if (status == true)
    {
        std::cout << "No element present." << std::endl;
        return;
    }
    else
    {
        status = isSorted();
        if (status == true)
        {
            index = this->binarySearch(target);
        }
        else
        {
            index = this->linearSearch(target);
        }
        this->leftShift(index);
        currentSize--;
        return;
    }
    std::cout << "Element not found.";
}

void Array::bubbleSort()
{
    for (int i=0; i<currentSize-1; i++)
    {
        for (int j=0; j<currentSize-1-i; j++)
        {
            if (myArray[j] < myArray[j+1])
            {
                this->Swap(j, j+1);
            }
        }
    }
}

void Array::insertionSort()
{
    for (int step = 1; step < currentSize; step++)
    {
        int key = myArray[step];
        int i = step-1;

        while (key < myArray[i] && i>=0)
        {
            myArray[i+1] = myArray[i];
            i--;
        }

        myArray[i+1] = key;
    }
}

void Array::Reverse()
{
    int j = currentSize-1;
    for (int i=0; i<currentSize/2; i++)
    {
        this->Swap(i, j);
        j--;
    }
}

void Array::display()
{
    for (int i=0; i<currentSize; i++)
    {
        std::cout << "Element at " << i << " index: " << this->myArray[i] << std::endl;
    }
}
