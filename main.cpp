#include <iostream>
#include "Array.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "List1.h"
#include "Stack1.h"
#include "Queue1.h"
#include "BST.h"

using namespace std;

int main()
{
    cout << "Select to check the working of following Data Structer: " << endl;
    int menu;
    do
    {
        cout << "1- Array\nUsing Array\n2- List\n3- Stack\n4- Queue\n5- Linked List\nUsing Linked List\n6- List\n7- Stack\n8- Queue\n9- Binary Search Tree\n>";
        cin >> menu;

        if (menu == 1)
        {
            Array arr;
            cout << "\n\nYour array is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert at start\n2- Insert at end\n3- Insert at position\n4- Delete from start\n5- Delete from end\n";
                cout << "6- Delete by Search\n7- Display\n8- Left Rotate\n9- Right Rotate\n10- Is full\n11- Is Empty\n12- Is Sorted\n";
                cout << "13- Sort Ascending\n14- Sort Descending\n15- Reverse\n16- Find Element\nOther than above- To exit array testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case 1:
                        int value;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        arr.insertAtStart(value);
                        break;

                    case 2:
                        cout << "Enter value to insert: ";
                        cin >> value;
                        arr.insertAtEnd(value);
                        break;

                    case 3:
                        int position;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        cout << "Enter position to insert at: ";
                        cin >> position;
                        arr.insertInMiddle(value, position);
                        break;

                    case 4:
                        arr.deleteFromStart();
                        break;

                    case 5:
                        arr.deleteFromEnd();
                        break;

                    case 6:
                        cout << "Enter element to delete: ";
                        cin >> value;
                        arr.deleteBySearch(value);
                        break;

                    case 7:
                        arr.display();
                        break;

                    case 8:
                        arr.leftRotate();
                        break;

                    case 9:
                        arr.rightRotate();
                        break;

                    case 10:
                        cout << arr.isFull() << endl;
                        break;

                    case 11:
                        cout << arr.isEmpty() << endl;
                        break;

                    case 12:
                        cout << arr.isSorted() << endl;
                        break;

                    case 13:
                        arr.insertionSort();
                        break;

                    case 14:
                        arr.bubbleSort();
                        break;

                    case 15:
                        arr.Reverse();
                        break;

                    case 16:
                        bool status = arr.isSorted();
                        cout << "Enter element to find: ";
                        cin >> value;

                        if (status == true)
                        {
                            cout << arr.binarySearch(value) << endl;
                        }
                        else
                        {
                            cout << arr.linearSearch(value) << endl;
                        }
                        break;
                }
                cout << "\n\n\n\n";
            } while (operation > 0 && operation <17);
        }
        else if (menu == 2)
        {
            List obj;
            cout << "\n\nYour List is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert at position\n2- Insert at end\n3- Remove\n4- Is full\n5- Is Empty\n6- Is Sorted\n";
                cout << "7- Display\n8- Sort Ascending\n9- Sort Descending\nOther than above- To exit list testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case (1):
                        int value, position;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        cout << "Enter position: ";
                        cin >> position;
                        obj.Insert(value, position);
                        break;
                    case (2):
                        cout << "Enter value to insert: ";
                        cin >> value;
                        obj.append(value);
                        break;
                    case (3):
                        cout << "Enter value to remove: ";
                        cin >> value;
                        obj.Remove(value);
                        break;
                    case (4):
                        cout << obj.isFull() << endl;
                        break;
                    case (5):
                        cout << obj.isEmpty() << endl;
                        break;
                    case (6):
                        cout << obj.isSorted() << endl;
                        break;
                    case (7):
                        obj.displayList();
                        break;
                    case (8):
                        obj.ascending();
                        break;
                    case (9):
                        obj.descending();
                        break;
                }
            } while (operation > 0 && operation < 10);
        }
        else if (menu == 3)
        {
            Stack obj;
            cout << "\n\nYour Stack is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert\n2- Delete\n3- Get top\n4- Is full\n5- Is Empty\n6- Display\nOther than above- To exit array testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case (1):
                        int value;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        obj.push(value);
                        break;
                    case (2):
                        obj.pop();
                        break;
                    case (3):
                        obj.getTop();
                        break;
                    case (4):
                        cout << obj.isFull() << endl;
                        break;
                    case (5):
                        cout << obj.isEmpty() << endl;
                        break;
                    case (6):
                        obj.displayStack();
                        break;
                }
            } while (operation > 0 && operation < 7);
        }

        else if (menu == 4)
        {
            Queue obj;
            cout << "\n\nYour Queue is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert\n2- Delete\n3- Get front\n4- Is full\n5- Is Empty\n6- Display\nOther than above- To exit array testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case (1):
                        int value;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        obj.enQueue(value);
                        break;
                    case (2):
                        obj.deQueue();
                        break;
                    case (3):
                        obj.getFront();
                        break;
                    case (4):
                        cout << obj.isFull() << endl;
                        break;
                    case (5):
                        cout << obj.isEmpty() << endl;
                        break;
                    case (6):
                        obj.displayQueue();
                        break;
                }
            } while (operation > 0 && operation < 7);
        }

        else if (menu == 5)
        {
            LinkedList ll;
            cout << "\n\nYour Linked List is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert at start\n2- Insert at end\n3- Insert at position\n4- Delete from start\n5- Delete from end\n";
                cout << "6- Delete by Search\n7- Display\n8- Find Element\n9- Is Sorted\nOther than above- To exit LinkedList testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case 1:
                        int value;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        ll.insertAtStart(value);
                        break;

                    case 2:
                        cout << "Enter value to insert: ";
                        cin >> value;
                        ll.insertAtEnd(value);
                        break;

                    case 3:
                        int position;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        cout << "Enter position to insert at: ";
                        cin >> position;
                        ll.insertAtPosition(value, position);
                        break;

                    case 4:
                        ll.deleteFromStart();
                        break;

                    case 5:
                        ll.deleteFromLast();
                        break;

                    case 6:
                        cout << "Enter element to delete: ";
                        cin >> value;
                        ll.deleteBySearch(value);
                        break;

                    case 7:
                        ll.display();
                        break;


                    case 8:
                        cout << "Enter the value you want to search: ";
                        cin >> value;
                        ll.Search(value);
                        break;

                    case 9:
                        cout << ll.isSorted();
                        break;

                }
                cout << "\n\n\n\n";
            } while (operation > 0 && operation <17);
        }
        else if ( menu == 6)
        {
            cout << "Enter the size of the list (Standard is 10): ";
            int Size;
            cin >> Size;
            List1 obj(Size);
            cout << "\n\nYour List is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert at position\n2- Insert at end\n3- Remove\n4- Is full\n5- Is Empty\n6- Is Sorted\n";
                cout << "7- Display\nOther than above- To exit list testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case (1):
                        int value, position;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        cout << "Enter position: ";
                        cin >> position;
                        obj.Insert(value, position);
                        break;
                    case (2):
                        cout << "Enter value to insert: ";
                        cin >> value;
                        obj.append(value);
                        break;
                    case (3):
                        cout << "Enter value to remove: ";
                        cin >> value;
                        obj.Remove(value);
                        break;
                    case (4):
                        cout << obj.isFull() << endl;
                        break;
                    case (5):
                        cout << obj.isEmpty() << endl;
                        break;
                    case (6):
                        cout << obj.isSorted() << endl;
                        break;
                    case (7):
                        obj.displayList();
                        break;

                }
            } while (operation > 0 && operation < 8);

        }
        else if ( menu == 7)
        {
            cout << "Enter the size of the Stack (Standard is 10): ";
            int Size;
            cin >> Size;
            Stack1 obj(Size);
            cout << "\n\nYour Stack is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert\n2- Delete\n3- Is full\n4- Is Empty\n5- Display\nOther than above- To exit Stack testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case (1):
                        int value;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        obj.push(value);
                        break;
                    case (2):
                        obj.pop();
                        break;
                    case (3):
                        cout << obj.isFull() << endl;
                        break;
                    case (4):
                        cout << obj.isEmpty() << endl;
                        break;
                    case (5):
                        obj.displayStack();
                        break;
                }
            } while (operation > 0 && operation < 7);
        }
        else if ( menu == 8)
        {
            cout << "Enter the size of the Queue (Standard is 10): ";
            int Size;
            cin >> Size;
            Queue1 obj(Size);
            cout << "\n\nYour Queue is created." << endl;
            int operation;

            do
            {
                cout << "Select to perform operation." << endl;
                cout << "1- Insert\n2- Delete\n3- Is full\n4- Is Empty\n5- Display\nOther than above- To exit array testing\n>";
                cin >> operation;

                switch (operation)
                {
                    case (1):
                        int value;
                        cout << "Enter value to insert: ";
                        cin >> value;
                        obj.enQueue(value);
                        break;
                    case (2):
                        obj.deQueue();
                        break;
                    case (3):
                        cout << obj.isFull() << endl;
                        break;
                    case (4):
                        cout << obj.isEmpty() << endl;
                        break;
                    case (5):
                        obj.DisplayQueue();
                        break;
                }
            } while (operation > 0 && operation < 7);

        }
        else if (menu == 9)
        {
            BST bst;
            cout << "\n\nYour BST is created." << endl;
            int operation;

            do
            {
                cout << "1- Insert\n2- Delete\n3- Search\n4- InOrder Dispaly\n5- PreOrder Display\n6- PostOrder Display\nOther than above to exit BST testing\n>";
                cin >> operation;
                switch (operation)
                {
                case (1):
                    cout << "Enter the value : ";
                    int value;
                    cin >> value;
                    bst.Insert(value);
                    break;
                case (2):
                    cout << "Enter the value you want to delete : ";
                    cin >> value;
                    bst.Remove(value);
                    break;
                case (3):
                    cout << "Enter the value you want to search : ";
                    cin >> value;
                    bst.Search(value);
                    cout<<endl;
                    break;
                case (4):
                    bst.printInOrder();
                    cout << endl;
                    break;
                case (5):
                    bst.printPreOrder();
                    cout << endl;
                    break;
                case (6):
                    bst.printPostOrder();
                    cout << endl;
                    break;
                }
            } while (operation > 0 && operation < 7);
        }
    } while (menu > 0 && menu < 10);
    return 0;
}
