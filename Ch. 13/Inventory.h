/*
* Matheus Muniz da Silva
*
* Chapter 13 Programming Assignment
*
* March 19, 2019
*
*/
#ifndef INV_H
#define INV_H
using namespace std;

class Inventory
{
private:
    int itemNumber; // Positive int
    float priceQuoted; // Float >=0 that holds the quoted repair price
    float hoursWorked; // Float >=0 that holds th number of hours of labor
    string itemDesc; // String that holds the item description (<25 characters)
    string custLastName; // String that holds last name of the customer (<25 characters)
    string custPhone; // String that holds customer's phone number (<11 characters)
public:

    Inventory(); //Constructor

    Inventory(int, string, string,
              string, float, float); //Constructor #2

   // Sets an element to a value.
    void setItemNumber(int);
    void setItemDesc(string);
    void setCustLastName(string);
    void setCustPhone(string);
    void setPriceQuoted(float);
    void setHoursWorked(float);

    //Returns an element.
    int getItemNumber();
    string getItemDesc();
    string getCustLastName();
    string getCustPhone();
    float getPriceQuoted();
    float getHoursWorked();
};
#endif
