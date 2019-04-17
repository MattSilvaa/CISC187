/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 18 Assignment
 *
 * April 16, 2019
 *
*/

#ifndef CAPITALLIST_H
#define CAPITALLIST_H

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
public:
    // Constructor
    CapitalList()
    {
        head = nullptr;
    }

    // Destructor
    ~CapitalList();

    // Mutators
    void appendChar (char);
    void insertNode(char, int);
    void deleteNode(int);
    void displayList() const;
    void reverseList();
    void searchList(char);

};
#endif