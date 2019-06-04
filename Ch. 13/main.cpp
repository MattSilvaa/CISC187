/*
* Matheus Muniz da Silva
*
* Chapter 13 Programming Assignment
*
* March 19, 2019
*
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "Inventory.h"
using namespace std;

int main()
{
    // Constant to hold size of array
    const int ARRAY_SIZE = 5;

    //Create an array of 5 objects
    Inventory inv[ARRAY_SIZE];

    //Global Constants
    int iNumber;
    string iDesc;
    string cusName;
    string phone;
    float price;
    float hours;
    float totalHours = 0;

    // For Loop to get input from the user
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter the item number: " << endl;
        cin >> iNumber;
        while (iNumber < 1)
        {
            cout << "ERROR! Please enter a valid item number: ";
            cin >> iNumber;
        }

        cout << "Enter the item's description: ";
        cin.ignore();
        getline (cin,iDesc);
        while (iDesc.size() >= 25)
        {
            cout << "ERROR! Please enter an item description less than"
                    "25 characters: ";
            getline(cin,iDesc);
        }

        cout << "Enter the customer's last name: ";
        getline(cin,cusName);
        while (cusName.size() >= 25)
        {
            cout << "ERROR! Please enter a last name that is less than "
                    "25 characters: ";
            getline(cin,cusName);
        }

        cout << "Enter the customer's phone number: ";
        getline(cin,phone);
        while (phone.size() >= 11)
        {
            cout << "ERROR! Please enter a valid phone number ";
            getline(cin,phone);
        }

        cout << "Enter the quoted repair price: $";
        cin >> price;
        while (price < 0)
        {
            cout << "ERROR! Please enter a valid quoted repair price: $";
            cin >> price;
        }

        cout << "Enter the hours worked: ";
        cin >> hours;
        while (hours < 0)
        {
            cout << "ERROR! Please enter a valid amount of hours: ";
            cin >> hours;
        }
        cout << endl;

        inv[i].setHoursWorked(hours);
        inv[i].setItemNumber(iNumber);
        inv[i].setItemDesc(iDesc);
        inv[i].setCustLastName(cusName);
        inv[i].setCustPhone(phone);
        inv[i].setPriceQuoted(price);

        cout << endl;
    }

    cout << setw(32) << "Matt's Computer Repair:\n";
    cout << "---------------------------------------\n";

    // For loop to display results
    for ( int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << left << setw(15) << "Item: "<< inv[i].getItemNumber() << endl;
        cout << left << setw(15) << "Desc: "<< inv[i].getItemDesc() << endl;
        cout << left << setw(15) << "Cust: " << inv[i].getCustLastName()<< endl;
        cout << left << setw(15) << "Phone: " << inv[i].getCustPhone() << endl;
        cout << left << setw(15) << "Quote: " << "$"  << inv[i].getPriceQuoted() <<endl;
        cout << left << setw(15) << "Hours: "  << inv[i].getHoursWorked() << endl;

        totalHours += inv[i].getHoursWorked();

        cout << endl;
    }

    cout << "\nAll repairs totaled to " << totalHours << " hours." << endl;

    return 0;
}
