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

int main()
{
    //////////////////////////////////////////////////
    //
    //  LOCAL OBJECTS/VARIABLES
    //
    /////////////////////////////////////////////////

    char letter;
    int choice, position;
    CapitalList one;

    ////////////////////////////////////////////////

    do
    {
        cout << "\nWelcome to my list!" << endl
             << "1. Append" << endl
             << "2. Insert" << endl
             << "3. Delete" << endl
             << "4. Print" << endl
             << "5. Reverse" << endl
             << "6. Search" << endl
             << "7. Exit Program" << endl
             << "Please choose a menu option: ";

        cin >> choice;
        while (choice < 1 || choice > 7) {
            cout << "\nInvalid selection! Try again: ";
            cin >> choice;
        }

        switch (choice)
        {
            case 1:
                cout << "\nWhich value do you wish to append? ";
                cin >> letter;

                while (letter < 'A' || letter > 'Z')
                {
                    cout << "\nInvalid! Please use a capital letter: ";
                    cin >> letter;
                }

                one.appendChar(letter);

                break;

            case 2:
                cout << "\nWhat letter do you want to insert? ";
                cin >> letter;

                while (letter < 'A' || letter > 'Z')
                {
                    cout << "\nInvalid! Please use a capital letter: ";
                    cin >> letter;
                }

                cout << "\nWhere do you want to insert it? ";
                cin >> position;

                one.insertNode(letter, position);

                break;

            case 3:
                cout << "\nWhat position do you wish to remove? ";
                cin >> position;

                one.deleteNode(position);

                break;

            case 4:
                one.displayList();
                break;

            case 5:
                one.reverseList();
                break;

            case 6:
                cout << "\nWhich character do you wish to search for? " << endl;
                cin >> letter;

                while (letter < 'A' || letter > 'Z')
                {
                    cout << "\nInvalid! Please use a capital letter: ";
                    cin >> letter;
                }

                one.searchList(letter);
                break;
        }
    } while (choice != 7);

    cout << "\nOk, see you next time!" << endl;
    return 0;
}
