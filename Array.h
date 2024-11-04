#ifndef ARRAY_H
#define ARRAY_H


class Array
{
    private:
        int myArray[10];
        int currentSize;

    public:
        Array();

        void initializeArray();
        bool isSorted();
        bool isFull();
        bool isEmpty();
        void Swap(int, int);
        void leftShift(int);
        void rightShift(int);
        void leftRotate();
        void rightRotate();

        void getElement(int);
        bool insertAtStart(int);
        bool insertAtEnd(int);
        void insertInMiddle(int, int);

        int linearSearch(int);
        int binarySearch(int);

        bool deleteFromStart();
        bool deleteFromEnd();
        void deleteBySearch(int);

        void bubbleSort();
        void insertionSort();

        void Reverse();
        void display();
};

#endif // ARRAY_H
