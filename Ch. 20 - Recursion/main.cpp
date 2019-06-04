/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 20 Assignment
 *
 * May 7, 2019
 *
*/

#include <iostream>
#include "CapitalList.h"

using namespace std;

// Function prototypes
void executeMenu();
void showMenu();
char checkLetter();
int checkInput();

int main()
{
    cout << "\nWelcome to my list!\n";

    // Executes the main part of the program (menu and operations)
    executeMenu();

    cout << "\nOk, see you next time!\n";
}

// *********************************************************
//
// This function displays a menu that allows the user
// to perform a lot of actions on a linked list.
// The user can append a node, insert a node, delete a node,
// display all of content of the list, reverse all of the
// nodes, search for a letter in the list, display the number
// of nodes in the list, and see the largest value in the list.
//
// *********************************************************
void executeMenu()
{
    CapitalList list;       // Creates an instance of the linked list
    int choice;             // Holds user's menu choice
    char letter;            // Holds the user's letter choice
    int position;           // Holds user's position choice

    do
    {
        showMenu();                 // Displays the menu and asks for input

        choice = checkInput();      // Holds the value and makes sure that it is valid

        switch (choice)
        {
            // Menu option 1, appends node to list
            case 1:
                cout << "\nWhich value do you wish to append? ";
                letter = checkLetter();

                list.appendChar(letter);

                break;

            // Menu option 2, inserts node into list
            case 2:
                cout << "\nWhat letter do you want to insert? ";
                letter = checkLetter();

                // Gets the position to insert the node.
                cout << "\nWhere do you want to insert it? ";
                cin >> position;

                list.insertNode(letter, position);
                break;

            // Menu option 3, deletes a node
            case 3:
                // Gets the postiion that the user wants to delete
                cout << "\nWhat position do you wish to remove? ";
                cin >> position;

                list.deleteNode(position);
                break;

            // Menu option 4, displays the list
            case 4:
                list.displayList();
                break;

            // Menu option 5, Reverses all the nodes in the list
            case 5:
                list.reverseList();
                break;

            // Menu option 6, searches for a letter in the list
            case 6:
                // Get the letter to be searched for
                cout << "\nWhich character do you wish to search for? " << endl;
                letter = checkLetter();

                list.searchList(letter);
                break;

            // Menu option 7, displays the number of nodes in the list
            case 7:
                cout << "\nThere are " << list.numNodes() << " nodes in the list.\n";
                break;

            // Menu option 8, displays the largest value in the list
            case 8:
                cout << "\nThe largest value in the list is " << list.maxNode()
                << ".\n";
                break;
        }
    } while (choice != 9);
}

// *********************************************************
//
// This function displays the menu for the actions to
// performm on the linked list and prompts for user input.
//
// *********************************************************
void showMenu()
{
    cout << "\n1. Append" << endl
         << "2. Insert" << endl
         << "3. Delete" << endl
         << "4. Print" << endl
         << "5. Reverse" << endl
         << "6. Search" << endl
         << "7. Number of Nodes" << endl
         << "8. Max Node" << endl
         << "9. Exit Program" << endl
         << "Please choose a menu option: ";
}

// *********************************************************
//
// This function makes sure that the menu choice that the
// user selected is valid. If it isn't it prompts the user
// to enter a new value.
//
// *********************************************************
int checkInput()
{
    int choice;

    cin >> choice;

    while (choice < 1 || choice > 9)
    {
        cout << "\nInvalid selection! Try again: ";
        cin >> choice;
    }

    return choice;
}

// *********************************************************
//
// This function makes sure the user entered a valid letter.
// If it isn't it prompts the user to enter a new value.
//
// *********************************************************
char checkLetter()
{
    char letter;

    cin >> letter;

    while (letter < 'A' || letter > 'Z')
    {
        cout << "\nInvalid! Please use a capital letter: ";
        cin >> letter;
    }

    return letter;
}
