#include "TreeNode.h"

void TreeNode::setData(int data)
{
    this->data = data;
}

int TreeNode::getData()
{
    return this->data;
}

void TreeNode::setLeft(TreeNode* left)
{
    this->left = left;
}

TreeNode* TreeNode::getLeft()
{
    return this->left;
}

void TreeNode::setRight(TreeNode* right)
{
    this->right = right;
}

TreeNode* TreeNode::getRight()
{
    return this->right;
}

TreeNode::TreeNode(int data)
{
    this->setData(data);
    this->setLeft(nullptr);
    this->setRight(nullptr);
}
