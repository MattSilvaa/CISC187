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

// Function Prototypes
int checkNumber();
void showMenu();
void executeMenu();
int validateInput();


int main()
{
    cout << "\nWelcome to my Binary Tree!\n";

    // Executes the main part of the program (menu and operations)
    executeMenu();

    cout << "\nGood bye!\n";

}

// This function displays a menu that allows the user
// to perform a lot of actions on a binary tree.
// The user can insert a node into the binary tree, display the
// tree in order, get a count how moany leaf nodes there are,
// display the height of tree, display the width of the tree.
void executeMenu()
{
    BinaryTree list;        //Creates an instance of the binary tree
    int choice;             // Holds user's menu choice
    int number;             // Holds user's number to insert

    do
    {
        showMenu();         // Displays the menu for the user

        choice = validateInput();           // Checks if choice is valid

        switch (choice)
        {
            // Executes menu option 1, inserts a number
            case 1:
                cout << "\nWhich number do you want to insert? ";

                number = checkNumber();     // Make sure input is an integer

                list.insertNode(number);

                break;

            //  Executes menu option 2, displays the tree
            case 2:
                cout << "\nNow displaying the tree, in order...\n";

                list.displayInOrder();

                break;

            //  Executes menu option 3, displays number of leaf nodes
            case 3:
                cout << "\nNow displaying the number of leaves on the tree...\n";

                cout << list.getLeafCount() << " leave nodes.\n";
                break;

            //  Executes menu option 4, displays the tree height
            case 4:
                cout << "\nThe height of the tree is...\n";

                cout << list.getTreeHeight() << " nodes.\n";
                break;

            //  Executes menu option 5, display the tree width
            case 5:
                cout << "\nThe width of the tree is...\n";

                cout << list.getMaxWidth() << " nodes.\n";
                break;
        }

    }while (choice != 6);
}

// The showMenu function displays the menu for the actions to perform
// on the linked list and prompts for user input.
void showMenu()
{
    cout <<"\n1.  Insert numbers\n"
        << "2.  Display the tree in order.\n"
        << "3.  Display Leaf Count\n"
        << "4.  Display Tree Height\n"
        << "5.  Display Tree Width\n"
        << "6.  Exit\n"
        << "\nPlease enter your choice: ";
}

// The validateInput function makes sure that the menu choice that
// the user selected is valid. If it isn't it prompts the user to
// enter a new value.
int validateInput()
{
    int input;

    cin >> input;
    while (input < 1 || input > 6)
    {
        cout << "\nERROR!Please enter a valid input: ";
        cin >> input;
    }

    return input;
}

// The checkNumber function makes sure that the the number integer is valid.
// It checks to make sure that the input is an integer, if it isn't it asks
// the user to try again. If the input is an integer it then checks to see
// if the input is a positive integer.
int checkNumber()
{
    int number;

    cin >> number;

    while ( number < 0)
    {
        cout << "\nInvalid! Please use a positive integer: ";
        cin >> number;
    }

    return number;
}
