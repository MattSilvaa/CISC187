/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 21 Assignment
 *
 * May 24, 2019
 *
*/

#include <iostream>
#include "BinaryTree.h"

using namespace std;

//  The insertNode function is called with the number to be
//  inserted passed as an argument.It then assigns that value to
//  a new node.
void BinaryTree::insertNode(int num)
{
    if (num >= 0)
    {
        TreeNode *newNode = nullptr;    // Pointer to a new node.

        // Create a new node and store num in it.
        newNode = new TreeNode;
        newNode->value = num;
        newNode->left = newNode->right = nullptr;

        // Insert the node
        insert(root, newNode);
    }
    else
        exit(EXIT_FAILURE);
}

//  The insert function takes a pointer to a subtree and a pointer to
//  a new node as arguments. It then searches for the appropriate location
//  in the subtree to insert the node, and then makes the insertion.
void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if (nodePtr == nullptr)
        nodePtr = newNode;
    else if (newNode->value < nodePtr->value)
        insert(nodePtr->left, newNode); // Search the left branch.
    else
        insert(nodePtr->right, newNode); // Search the right branch.
}

//  The destroySubTree function is called by the destructor.
//  It deletes all nodes in the tree.
void BinaryTree::destroySubTree(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        if (nodePtr->left)
            destroySubTree(nodePtr->left);
        if (nodePtr->right)
            destroySubTree(nodePtr->right);
        delete nodePtr;

    }
}

//  The displayInOrder function displays the values in the subtree
//  pointed to by nodePtr, via in order traversal.
void BinaryTree::displayInOrder(TreeNode *nodePtr) const
{
    if (nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout << nodePtr->value << endl;
        displayInOrder(nodePtr->right);
    }
}

//  The getLeafCount function displays the number of leaf nodes in
//  the binary tree.
int BinaryTree::getLeafCount(TreeNode *nodePtr)
{
    if (!nodePtr)
        return 0;
    if (nodePtr->left == nullptr && nodePtr->right == nullptr)
        return 1;
    else
        return getLeafCount(nodePtr->left) + getLeafCount(nodePtr->right);

}

// The getMaxWidth function gets the width of each level and compares
// them to the current max level. After it runs through every level
// and returns the max value.
int BinaryTree::getMaxWidth(TreeNode *nodePtr)
{
    int max = 0;
    int width;

    int height = getTreeHeight(nodePtr);

    for (int i = 1; i <= height; i++)
    {
        width = getWidth(nodePtr, i);
        if ( width > max)
            max = width;
    }

    return max;
}

// The getWidth function gets the width of a given level
int BinaryTree::getWidth(TreeNode *nodePtr, int level)
{
    if (!nodePtr)
        return 0;
    if (level == 1)
        return 1;
    else if (level > 1)
        return getWidth(nodePtr->left, level - 1) +
        getWidth(nodePtr->right, level -1);
}

//  The getTreeHeight function displays the height of the binary tree
int BinaryTree::getTreeHeight(TreeNode *nodePtr)
{
    int left,right, count;

    if (nodePtr == nullptr)
        return 0;

    // Work down the tree using recursion
    left = getTreeHeight(nodePtr->left);
    right = getTreeHeight(nodePtr->right);

    // Assigns value to count in order to find height
    if (left > right)
        count = 1 + left;
    else
        count = 1 + right;

    // Works back up the tree
    return count;
}
