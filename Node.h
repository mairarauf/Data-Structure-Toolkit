#ifndef NODE_H
#define NODE_H


class Node
{
    private:
        int data;
        Node* next;

    public:
        void setData(int);
        int getData();
        void setNext(Node*);
        Node* getNext();

        Node(int);
};

#endif // NODE_H
