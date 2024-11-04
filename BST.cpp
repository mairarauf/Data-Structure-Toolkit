#include "BST.h"
#include <iostream>

BST::BST()
{
    this->root = nullptr;
}

void BST::Insert(int value)
{
    root = Insert(root, value);
}
void BST::Search(int value)
{
    Search(root,value);

}

TreeNode* BST::Insert(TreeNode* node, int value)
{
    if (node == nullptr)
    {
        return new TreeNode(value);
    }

    if (node->getData() > value)
    {
        node->setLeft(Insert(node->getLeft(), value));
    }
    else if (node->getData() < value)
    {
        node->setRight(Insert(node->getRight(), value));
    }

    return node;
}

TreeNode* BST::Search(TreeNode* node, int target)
{
    if (node == nullptr)
    {
        std::cout << "Element is not in the tree." << std::endl;
        return nullptr;
    }

    if (node->getData() == target)
    {
        std::cout << "Target element is at address ";
        return node;
    }
    else if (node->getData() > target)
    {
        Search(node->getLeft(), target);
    }
    else
    {
        Search(node->getRight(), target);
    }
}

void BST::printInOrder(TreeNode* node)
{
    if (node == nullptr)
    {
        return;
    }
    printInOrder(node->getLeft());
    std::cout << node->getData() << " ";
    printInOrder(node->getRight());
}

void BST::printPreOrder(TreeNode* node)
{
    if (node == nullptr)
    {
        return;
    }
    std::cout << node->getData() << " ";
    printPreOrder(node->getLeft());
    printPostOrder(node->getRight());
}

void BST::printPostOrder(TreeNode* node)
{
    if (node == nullptr)
    {
        return;
    }
    printPostOrder(node->getLeft());
    printPostOrder(node->getRight());
    std::cout << node->getData() << " ";
}

void BST::printInOrder()
{
    printInOrder(root);
}

void BST::printPreOrder()
{
    printPreOrder(root);
}

void BST::printPostOrder()
{
    printPostOrder(root);
}

TreeNode* BST::findMin(TreeNode* node)
{
    while (node->getLeft())
    {
        node = node->getLeft();
    }
    return node;
}

void BST::Remove(int value) {
    root = Remove(root, value);
}

TreeNode* BST::Remove(TreeNode* node, int value) {
    if (node == nullptr) {
        return nullptr;
    }

    if (value < node->getData())
    {
        node->setLeft(Remove(node->getLeft(), value));
    }
    else if (value > node->getData())
    {
        node->setRight(Remove(node->getRight(), value));
    }
    else
    {
        if (node->getLeft() == nullptr)
        {
            TreeNode* temp = node->getRight();
            delete node;
            return temp;
        }
        else if (node->getRight() == nullptr)
        {
            TreeNode* temp = node->getLeft();
            delete node;
            return temp;
        }

        TreeNode* temp = findMin(node->getRight());
        node->setData(temp->getData());
        node->setRight(Remove(node->getRight(), node->getData()));
    }

    return node;
}

