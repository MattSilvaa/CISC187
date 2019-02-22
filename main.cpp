/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 6 & 7 Programming Assignment
 *
 * February 19, 2019.
 *
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Global Constants
const int ROWS = 5;
const int COLUMNS = 5;

// Function prototypes
void showMenu(char [ROWS][COLUMNS]);
void seekDisplay (char [ROWS][COLUMNS]);
void showArray(char [ROWS][COLUMNS]);
char swapColumns(char [ROWS][COLUMNS]);
void numberVowels (char [ROWS][COLUMNS]);

int main()
{
    // Initialize the 2-D Array
    char random[ROWS][COLUMNS] = {{'s','l','o','a','n'},
                                  {'h','o','r','s','e'},
                                  {'e','g','r','i','t'},
                                  {'h','o','u','s','e'},
                                  {'w','a','t','e','r'}};

    showMenu(random);

    return 0;
}

// ********************************************************
// name:      showMenu
// called by: main
// passed:  random[][]
// returns:   nothing
// calls:     swapColumns, numberVowels,showArray, seekDisplay
// The showMenu function displays a menu and asks the user to
// inout their option and it executes accordingly.
// ********************************************************
void showMenu(char random[ROWS][COLUMNS])
{
    int option;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Interchange column 2 with column 5.\n";
        cout << "2. Count and display the number of vowels.\n";
        cout << "3. Display the array in a matrix.\n";
        cout << "4. Search for and display number of instances of any given character.\n";
        cout << "5. Exit.\n";
        cout << "\nEnter your selection or enter 5 to exit: ";
        cin  >> option;

        while (option < 1 || option > 5)
        {
            cout << "Please enter a valid option: ";
            cin >> option;
        }

        switch(option)
        {
            case 1:
                swapColumns(random);
                break;
            case 2:
                numberVowels(random);
                break;
            case 3:
                showArray(random);
                break;
            case 4:
                seekDisplay(random);
                break;
            case 5:
                cout << "Bye!";
        }
    } while (option != 5);
}

// ********************************************************
// name:      swapColumns
// called by: showMenu
// passed:  numbers[][]
// returns:   numbers[][]
// calls:     nobody
// The swapColumns function takes a 2-D array as an input and
// then swaps column 2 and 5.
// ********************************************************
char swapColumns (char numbers[ROWS][COLUMNS])
{
    char temp[5][1];

    for (int x = 0; x < ROWS; x++)
    {
        temp[x][0] = numbers[x][1];
        numbers[x][1] = numbers[x][4];
        numbers[x][4] = temp[x][0];
    }
    return numbers[ROWS][COLUMNS];
}

// ********************************************************
// name:      numberVowels
// called by: showMenu
// passed:  numbers[][]
// returns:   nothing
// calls:     nobody
// The numberVowels function gets the array and counts how
// many vowels are in the array. It then displays to the user
// the final count.
// ********************************************************
void  numberVowels (char numbers[ROWS][COLUMNS])
{
    int count = 0;

    for (int x = 0; x < ROWS; x++)
    {
        for (int y = 0; y < COLUMNS; y++)
        {
            if ( numbers[x][y] == 'a' || numbers[x][y] == 'e' || numbers[x][y] == 'i'
                 || numbers[x][y] == 'o' || numbers[x][y] == 'u')
            {
                count++;
            }
        }
    }
    cout << "\nThere are " << count << " vowels in this array.\n\n";
}

// ********************************************************
// name:      showArray
// called by: showMenu
// passed:  numbers[][]
// returns:   nothing
// calls:     nobody
// The showArray function takes the array from the main function
// and displays it.
// ********************************************************
void showArray (char numbers[ROWS][COLUMNS])
{
    for (int x = 0; x < ROWS; x++)
    {
        for (int y = 0; y < COLUMNS; y++)
        {
            cout << setw(5) << right << numbers[x][y] << " ";
        }
        cout << endl;
    }
}

// ********************************************************
// name:      seekDisplay
// called by: showMenu
// passed:  numbers[][]
// returns:   nothing
// calls:     nobody
// The seekDisplay function asks the user which character
// they want to search for. After receiving the input,
// it goes through the array and counts the number of
// instances of the given character. It then displays
// the total count at the end.
// ********************************************************
void seekDisplay (char numbers[ROWS][COLUMNS])
{
    char givenChar;
    int count = 0;

    cout << "Which character do you want to search for?";
    cin >> givenChar;

    for (int x = 0; x < ROWS; x++)
    {
        for (int y = 0; y < COLUMNS; y++)
        {
            if ( numbers[x][y] == givenChar)
            {
                count++;
            }
        }
    }
    cout << "\nThere is " << count << " instance(s) of the character " << givenChar << ".\n\n";
}
