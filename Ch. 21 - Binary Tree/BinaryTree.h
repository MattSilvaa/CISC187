/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 21 Assignment
 *
 * May 24, 2019
 *
*/

#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree
{
private:
    struct TreeNode
    {
        int value;           // The value in the node
        TreeNode *left;      // Pointer ot left child ndoe
        TreeNode *right;     // Pointer to right child node;
    };

    TreeNode *root;          // Pointer to the root node

    // Private member functions
    void insert(TreeNode *&, TreeNode *&);
    void destroySubTree(TreeNode *);
    void displayInOrder(TreeNode *) const;
    int getLeafCount(TreeNode *);
    int getTreeHeight(TreeNode *);
    int getMaxWidth(TreeNode *);


public:
    // Constructor
    BinaryTree() { root = nullptr; }

    // Destructor
    ~BinaryTree() { destroySubTree(root); }

    // Binary Tree Operations
    int getWidth(TreeNode*, int);
    void insertNode(int);
    int getMaxWidth()
    { getMaxWidth(root);}
    void displayInOrder() const
    { displayInOrder(root); }
    int getLeafCount()
    { getLeafCount(root); }
    int getTreeHeight()
    { getTreeHeight(root);}

};

#endif //BINARYTREE_H
