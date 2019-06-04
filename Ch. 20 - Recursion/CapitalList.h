/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 18 Assignment
 *
 * May 7, 2019
 *
*/

#ifndef CAPITALLIST
#define CAPITALLIST

class CapitalList
{
private:
    // Linked List
    struct ListNode
    {
        char cap;
        struct ListNode *next;
    };

    ListNode *head;

    // Private member functions
    int countNodes(ListNode *) const;
    char largestNode(ListNode *, char) const;

public:
    // Constructor
    CapitalList()
    {
        head = nullptr;
    }

    // Destructor
    ~CapitalList();

    // Linked List operations.
    void appendChar (char);
    void insertNode(char, int);
    void deleteNode(int);
    void displayList() const;
    void reverseList();
    void searchList(char);
    int numNodes() const
        {return countNodes(head);}
    char maxNode() const
        { return largestNode(head,head->cap);}

};
#endif