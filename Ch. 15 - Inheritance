// main.cpp
// Matheus Muniz da Silva
// Chapter 15 - Programming Assignment
// 04-01-19

#include "Assignment.h"
#include <iostream>

using namespace std;

int main()
{
    char choice;

    do
    {
        // Variables to hold the scores;
        double codeExecution, modularCode,
        commentsFormatting, ioFormat, jing;

        // Accepting input
        cout << "Please enter data for the next student: \n";

        // Set code execution score and validate
        cout << "Code choice/execution: (total points possible = 50): \n";
        cin >> codeExecution;
        while (codeExecution > 50 || codeExecution < 0)
        {
            cout << "Invalid! Please enter a valid score: ";
            cin >> codeExecution;
        }

        // Set modular score and validate
        cout<<"Modular code: (total points possible = 20): \n";
        cin>>modularCode;
        while (modularCode > 20 || modularCode < 0)
        {
            cout << "Invalid! Please enter a valid score: ";
            cin >> modularCode;
        }

        cout<<"Comments and Formatting (total podoubles possible = 10):\n";
        cin>>commentsFormatting;
        while (commentsFormatting < 0 || commentsFormatting > 10)
        {
            cout << "Invalid! Please enter a valid score: ";
            cin >> commentsFormatting;
        }

        cout<<"Input/Output Professionalism (total podoubles possible = 10): \n";
        cin>>ioFormat;
        while (ioFormat< 0 || ioFormat > 10)
        {
            cout << "Invalid! Please enter a valid score: ";
            cin >> ioFormat;
        }

        cout<<"Jing: (total podoubles possible = 10): \n";
        cin>>jing;
        while (jing < 0 || jing > 10)
        {
            cout << "Invalid! Please enter a valid score: ";
            cin >> jing;
        }


        // Assign object
        Assignment assignment;

        // Call the letter grade.
        assignment.getTotal(codeExecution,modularCode, commentsFormatting, ioFormat, jing);

        // Check with user if they want to continue
        cout<<"Do you wish to enter another assignment? (Y/N) ";
        cin>> choice;

    }while( choice == 'Y' || choice == 'y' ); // If user enters N the loop ends.

    cout << "Okay, bye!";

    return 0;
}
