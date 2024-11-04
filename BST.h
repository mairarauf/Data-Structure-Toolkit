#ifndef BST_H
#define BST_H
#include "TreeNode.h"


class BST
{
    private:
        TreeNode* Insert(TreeNode*, int);
        TreeNode* Remove(TreeNode*, int);
        void printInOrder(TreeNode*);
        void printPreOrder(TreeNode*);
        void printPostOrder(TreeNode*);

    public:
        TreeNode* root;

        BST();
        void Insert(int);

        TreeNode* Search(TreeNode*, int);
        void Search(int);
        void printInOrder();
        void printPreOrder();
        void printPostOrder();

        TreeNode* findMin(TreeNode*);
        void Remove(int);
};

#endif // BST_H
