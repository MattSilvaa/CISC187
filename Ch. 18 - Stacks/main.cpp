/*
 * Matheus Muniz da Silva
 *
 * Chapter 19, Stacks
 *
 * April 24, 2019
 *
*/

#include <iostream>
#include "MathStack.h"

using namespace std;

int main()
{
    //////////////////////////////////////////////////
    //
    //  LOCAL OBJECTS/VARIABLES
    //
    /////////////////////////////////////////////////

    int choice, num;
    MathStack one;

    // Display menu to user
    do {
        cout << "\nWelcome to my program!" << endl
             << "1. Push " << endl
             << "2. Pop" << endl
             << "3. Add" << endl
             << "4. Subtract" << endl
             << "5. Multiply" << endl
             << "6. Divide" << endl
             << "7. Display Stack" << endl
             << "8. Exit Program" << endl
             << "Please choose a menu option: ";

        cin >> choice;

        while (choice < 1 || choice > 8) {
            cout << "\nInvalid selection! Try again: ";
            cin >> choice;
        }

        // Performs the options for the menu
        switch (choice)
        {
            case 1:
                cout << "\nWhich value do you wish to push? ";
                cin >> num;

                one.push(num);

                break;
            case 2:
                cout << "\nPopping the top value out!" << endl;

                one.pop(num);

                break;
            case 3:
                cout << "\nAdding the top two values..." << endl;

                one.add();

                break;
            case 4:
                cout << "\nSubtracting the top two values..." << endl;

                one.subtract();

                break;
            case 5:
                cout << "\nMultiplying the top two values..." << endl;

                one.multiply();

                break;
            case 6:
                cout << "\nDividing the top two values..." << endl;

                one.divide();

                break;
            case 7:
                cout << "\nHere's your list: " << endl;

                one.display();

                break;

        }
    } while (choice != 8); // Exit menu if user chooses 8.

    cout << "\nOk, see you next time!" << endl;
    return 0;
}
