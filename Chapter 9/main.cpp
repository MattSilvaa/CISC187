/*
 *
 * Matheus Muniz da Silva
 *
 * Chapter 9 Assisgnment
 *
 * February 25, 2019
 *
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Global Constant
const int SIZE = 25;


// Function prototypes
int showMenu();
void seekDisplay (char *);
void showArray(char *);
char *swapColumns(char *);
void numberVowels (char *);


int main()
{
    // Initialize the 2-D Array
    char random[SIZE] = {'s', 'l', 'o', 'a', 'n', 'h', 'o', 'r', 's', 'e', 'e', 'g', 'r', 'i', 't', 'h', 'o', 'u', 's',
                         'e', 'w', 'a', 't', 'e', 'r'};
    char *ptr;
    ptr = random;

    int option;

    // Loop continues until option int equals 5.
    do
    {
        option = showMenu();

        switch(option)
        {
            case 1:
                swapColumns(ptr);
                break;
            case 2:
                numberVowels(ptr);
                break;
            case 3:
                showArray(ptr);
                break;
            case 4:
                seekDisplay(ptr);
                break;
            case 5:
                cout << "Bye!\n";
        }
    } while (option != 5);

    return 0;
}

// ********************************************************
// name:      showMenu
// called by: main
// passed:
// returns:   choice
// calls:     nobody
// The showMenu function displays a menu and asks the user to
// inout their option and it executes accordingly.
// ********************************************************
int showMenu()
{
    int choice;

    cout << "\nMenu:\n";
    cout << "1. Interchange column 2 with column 5.\n";
    cout << "2. Count and display the number of vowels.\n";
    cout << "3. Display the array in a matrix.\n";
    cout << "4. Search for and display number of instances of any given character.\n";
    cout << "5. Exit.\n";
    cout << "\nEnter your selection or enter 5 to exit: ";
    cin  >> choice;

    while(choice < 1 || choice > 5)
    {
        cout << "Please enter a valid selection. ";
        cin >> choice;
    }

    return choice;
}

// ********************************************************
// name:      swapColumns
// called by: main
// passed:    *ptr
// returns:   ptr
// calls:     nobody
// The swapColumns function takes what would be a 2-D array as
// an input and then swaps column 2 and 5. However, since it
// is a 1D array we use a for loop that gives the same result.
// ********************************************************
char *swapColumns (char *ptr)
{
    for (int x = 1 , y = 4; x < SIZE && y < SIZE; x += 5, y +=5)
    {
        char temp = *(ptr+x);
        *(ptr+x) = *(ptr+y);
        *(ptr+y) = temp;
    }
    return ptr;
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
void  numberVowels (char *ptr)
{
    int count = 0;

    for (int x = 0; x < SIZE; x++)
    {
        {
            if ( *(ptr +x ) == 'a' || *(ptr +x ) == 'e' || *(ptr +x ) == 'i'
                 || *(ptr +x ) == 'o' || *(ptr +x ) == 'u')
            {
                count++;
            }
        }
    }
    cout << "\nThere are " << count << " vowels in this array.\n\n";
}

// ********************************************************
// name:      showArray
// called by: main
// passed:  *ptr
// returns:   nothing
// calls:     nobody
// The showArray function takes the array from the main function
// and displays it.
// ********************************************************

void showArray (char *ptr)
{
    for (int x = 0; x < 25; x++)
    {
        if (x % 5 == 0 )
        {
            cout << "\n";
        }
        cout << setw(5) << right << *(ptr + x) << " ";
    }
    cout << endl;
}

// ********************************************************
// name:      seekDisplay
// called by: main
// passed:  *ptr
// returns:   nothing
// calls:     nobody
// The seekDisplay function asks the user which character
// they want to search for. After receiving the input,
// it goes through the array and counts the number of
// instances of the given character. It then displays
// the total count at the end.
// ********************************************************
void seekDisplay (char *ptr)
{
    char givenChar;
    int count = 0;

    cout << "Which character do you want to search for?";
    cin >> givenChar;

    for (int x = 0; x < SIZE; x++)
    {
            if ( *(ptr +x ) == givenChar)
            {
                count++;
            }
    }
    cout << "\nThere is " << count << " instance(s) of the character " << givenChar << ".\n\n";
}
