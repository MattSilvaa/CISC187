/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 18 Assignment
 *
 * April 16, 2019
 *
*/

#include <iostream>
#include "CapitalList.h"

using namespace std;

// *********************************************************
//
// This function is passed a char value named letter. First,
// it checks to make sure that letter is a Capital. It then
// takes letter and appends it to the end of the list.
//
// *********************************************************

void CapitalList::appendChar(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
        ListNode *newNode;
        ListNode *nodePtr;

        newNode = new ListNode;
        newNode->cap = letter;
        newNode->next = nullptr;

        if (!head)
            head = newNode;
        else {
            nodePtr = head;

            while (nodePtr->next)
                nodePtr = nodePtr->next;

            nodePtr->next = newNode;
        }
    } else
        exit(EXIT_FAILURE);
}

// *********************************************************
//
// This function displays all of the values inside of the
// linked list.
//
// *********************************************************

void CapitalList::displayList() const
{
    ListNode *nodePtr;

    cout << "\nHere's your list" << endl;

    nodePtr = head;

    while (nodePtr) {
        cout << nodePtr->cap << endl;

        nodePtr = nodePtr->next;
    }
}

// *********************************************************
//
// This function is passed two variables, letter and position.
// It first makes sure that the int position is a valid input.
// It then checks to make sure that letter is also valid.
// If both of the values are valid it proceeds to insert
// letter at the given position.
//
// *********************************************************

void CapitalList::insertNode(char letter, int position) {
    ListNode *temp1 = new ListNode();
    ListNode *counter = head;
    temp1->cap = letter;
    temp1->next = nullptr;

    int size = 0;
    while (counter) {
        size++;
        counter = counter->next;
    }
    if (position > size || position < 1) {
        cout << "\nI'm sorry but that position is invalid." << endl;
        return;
    }
    if (letter >= 'A' && letter <= 'Z') {
        if (position == 1) {
            temp1->next = head;
            head = temp1;
            return;
        }

        ListNode *temp2 = head;
        for (int i = 0; i < position - 2; i++) {
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;

        size++;
    } else
        exit(EXIT_FAILURE);

}

// *********************************************************
//
// This function first makes sure that the given position is
// valid. If it is, it removes the value that is stored
// at the given position.
//
// *********************************************************

void CapitalList::deleteNode(int position) {
    ListNode *temp1 = head;
    ListNode *counter = head;

    int size = 0;
    while (counter) {
        size++;
        counter = counter->next;
    }
    if (position > size || position < 1) {
        cout << "\nI'm sorry but that position is invalid " << endl;
        return;
    }

    if (position == 1) {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < position - 2; i++)
        temp1 = temp1->next;

    ListNode *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);

}

// *********************************************************
//
// This function reverses all of the values inside of the
// linked list.
//
// *********************************************************

void CapitalList::reverseList() {
    ListNode *previousNode = nullptr;
    ListNode *nodePtr = head;
    ListNode *n;

    cout << "\nReversing the list...";

    while (nodePtr != nullptr) {
        n = nodePtr->next;
        nodePtr->next = previousNode;
        previousNode = nodePtr;
        nodePtr = n;
    }

    head = previousNode;

    cout << "\nThe list is now reversed!" << endl;
}
// *********************************************************
//
// This function first makes sure that the list isn't empty.
// Then it makes sure that the passed variable, letter is valid.
// If it is, it searches the list for letter and displays in what
// position it was found in. If the value isn't on the list it
// tells the user.
//
// *********************************************************
void CapitalList::searchList(char letter) {
    int position = 0;
    bool x = false;

    if (head == nullptr) {
        cout << "\nThe List is empty!" << endl;
        return;
    }

    ListNode *start;
    start = head;
    if (letter >= 'A' && letter <= 'Z') {
        cout << "\nSearching for your letter..." << endl;
        while (start != nullptr) {
            position++;
            if (start->cap == letter) {
                x = true;
                cout << "Letter " << letter << " was found at position "
                     << position << "." << endl;
            }
            start = start->next;
        }
        if (!x)
            cout << "Letter " << letter << " was not found in the list." << endl;
    } else
        exit(EXIT_FAILURE);
}

// Destructor
CapitalList::~CapitalList() {
    ListNode *nodePtr, *nextNode;

    nodePtr = head;

    while (nodePtr != nullptr) {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }

}