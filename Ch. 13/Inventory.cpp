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

// ********************************************************
// name:      Inventory
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nobody
// This is a constructor that sets all member variables to 0 or ""                                     *
// ********************************************************
Inventory::Inventory()
{
    itemNumber = 0;
    itemDesc = "";
    custLastName = "";
    custPhone ="";
    priceQuoted = 0;
    hoursWorked = 0;
}

// ********************************************************
// name:      Inventory
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nobody
// This is a constructor that accepts variables and sets them to the
// appropriate variabes.
// ********************************************************
Inventory::Inventory(int iNumber, string iDesc, string cusName,
                     string phone, float price, float hours)
{
    itemNumber = iNumber;
    itemDesc = iDesc;
    custLastName = cusName;
    custPhone = phone;
    priceQuoted = price;
    hoursWorked = hours;
}

// ********************************************************
// name:      setItemNumber
// called by: main
// passed:    int iNumber
// returns:   nothing
// calls:     nobody
// This function accepts an integer argument that is copied
// to the itemNumber variable. However, if it's not a positive
// integer the function calls an exit-failure.
// ********************************************************
void Inventory::setItemNumber (int iNumber)
{
    if ( iNumber < 0)
        exit(EXIT_FAILURE);

    itemNumber = iNumber;
}

// ********************************************************
// name:      setItemDesc
// called by: main
// passed:    string iDesc
// returns:   nothing
// calls:     nobody
// This function accepts an string argument that is copied
// to the itemDesc variable. However, if the string size is
// >= 25 the function calls an exit-failure.
// ********************************************************
void Inventory::setItemDesc (string iDesc)
{
    if (iDesc.length() >= 25)
        exit(EXIT_FAILURE);

    itemDesc = iDesc;
}

// ********************************************************
// name:      setCustLastName
// called by: main
// passed:    string cusName
// returns:   nothing
// calls:     nobody
// This function accepts an string argument that is copied
// to the custLastName variable. However, if the string size is
// >= 25 the function calls an exit-failure.
// ********************************************************
void Inventory::setCustLastName (string cusName)
{
    if ( cusName.length() >= 25 )
        exit(EXIT_FAILURE);

    custLastName = cusName;
}

// ********************************************************
// name:      setCustPhone
// called by: main
// passed:    string phone
// returns:   nothing
// calls:     nobody
// This function accepts an string argument that is copied
// to the custPhone variable. However, if the string size is
// >11 the function calls an exit-failure.
// ********************************************************
void Inventory::setCustPhone (string phone)
{
    if ( phone.length() > 11 )
        exit(EXIT_FAILURE);

    custPhone = phone;
}

// ********************************************************
// name:      setPriceQuoted
// called by: main
// passed:    float price
// returns:   nothing
// calls:     nobody
// This function accepts an float argument that is copied
// to the priceQuoted variable. However, if the float is
// negative the function calls an exit-failure.
// ********************************************************
void Inventory::setPriceQuoted (float price)
{
    if ( price < 0 )
        exit(EXIT_FAILURE);

    priceQuoted = price;
}

// ********************************************************
// name:      setHoursWorked
// called by: main
// passed:    float hours
// returns:   nothing
// calls:     nobody
// This function accepts an float argument that is copied
// to the hoursWorked variable. However, if the float is
// negative the function calls an exit-failure.
// ********************************************************
void Inventory::setHoursWorked (float hours)
{
    if ( hours < 0 )
        exit(EXIT_FAILURE);

    hoursWorked = hours;
}

// ********************************************************
// name:      getItemNumber
// called by: main
// passed:    nothing
// returns:   itemNumber
// calls:     nobody
// This function returns the variable itemNumber
// ********************************************************
int Inventory::getItemNumber()
{
    return itemNumber;
}

// ********************************************************
// name:      getItemDesc
// called by: main
// passed:    nothing
// returns:   itemDesc
// calls:     nobody
// This function returns the variable itemDesc
// ********************************************************
string Inventory::getItemDesc()
{
    return itemDesc;
}

// ********************************************************
// name:      getCustLastName
// called by: main
// passed:    nothing
// returns:   custLastName
// calls:     nobody
// This function returns the variable custLastName
// ********************************************************
string Inventory::getCustLastName()
{
    return custLastName;
}

// ********************************************************
// name:      getCustPhone
// called by: main
// passed:    nothing
// returns:   custPhone
// calls:     nobody
// This function returns the variable custPhone
// ********************************************************
string Inventory::getCustPhone()
{
    return custPhone;
}

// ********************************************************
// name:      getPriceQuoted
// called by: main
// passed:    nothing
// returns:   priceQuoted
// calls:     nobody
// This function returns the variable priceQuoted
// ********************************************************
float Inventory::getPriceQuoted()
{
    return priceQuoted;
}

// ********************************************************
// name:      getHoursWorked
// called by: main
// passed:    nothing
// returns:   hoursWorked
// calls:     nobody
// This function returns the variable hoursWorked
// ********************************************************
float Inventory::getHoursWorked()
{
    return hoursWorked;
}