#ifndef TREENODE_H
#define TREENODE_H


class TreeNode
{
    private:
        int data;
        TreeNode* left;
        TreeNode* right;

    public:
        void setData(int);
        int getData();
        void setLeft(TreeNode*);
        TreeNode* getLeft();
        void setRight(TreeNode*);
        TreeNode* getRight();

        TreeNode(int);
};

#endif // TREENODE_H
