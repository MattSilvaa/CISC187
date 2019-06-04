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

//***********************************************
//  This function deletes every node in the list*
//***********************************************
MathStack::~MathStack()
{
    StackNode *nodePtr = nullptr, *nextNode = nullptr;

    nodePtr = top;

    while(nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

bool MathStack::isEmpty()
{
    bool status;

    if (!top)
        status = true;
    else
        status = false;

    return status;
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************
void MathStack::push(int num)
{
    StackNode *newNode = nullptr;
    newNode = new StackNode;
    newNode->value = num;

    if (isEmpty())
    {
        top = newNode;
        newNode->next = nullptr;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

//*****************************************************
// Member function pop pops the value at the top      *
// of the stack off, and copies it into the variable  *
// passed as an argument.                             *
//*****************************************************

void MathStack::pop(int &num)
{
    StackNode *temp = nullptr;

    if (isEmpty())
    {
        cout << "\nInvalid! The stack is currently empty." << endl;
        return;
    }
    else
    {
        num = top->value;
        temp = top ->next;
        delete top;
        top = temp;

    }

}

//*************************************************
// Member function add() adds the two top values  *
// of the stack and then pushes their sum back    *
// into the stack.                                *
//*************************************************

void MathStack::add()
{
    int sum,a,b;

    if (!isEmpty())
        pop(a);
    else
    {
        cout << "\nERROR! The stack is empty!!!" << endl;
        return;
    }

    if(!isEmpty())
        pop(b);
    else
    {
        push(a);
        cout << "\nERROR! The stack only has one integer!!!" << endl;
        return;
    }

    sum = a+b;
    push(sum); // Push back to stack

}

//*************************************************
// Member function subtract() subtracts the two   *
// top values of the stack and then pushes        *
// their difference back into the stack.          *                             *
//*************************************************
void MathStack::subtract()
{
    int diff,a,b;

    if (!isEmpty())
        pop(a);
    else
    {
        cout << "\nERROR! The stack is empty!!!" << endl;
        return;
    }


    if(!isEmpty())
        pop(b);
    else
    {
        push(a);
        cout << "\nERROR! The stack only has one integer!!!" << endl;
        return;
    }

    diff = a - b;
    push(diff);

}

//*************************************************
// Member function multiply() multiplies the two  *
// top values of the stack and then pushes        *
// their multiple back into the stack.            *                             *
//*************************************************
void MathStack::multiply()
{
    int multiple,a,b;

    if (!isEmpty())
        pop(a);
    else
    {
        cout << "\nThe stack is empty!!!" << endl;
        return;
    }


    if(!isEmpty())
        pop(b);
    else
    {
        push(a);
        cout << "\nERROR! The stack only has one integer!!!" << endl;
        return;
    }

    multiple = a * b;
    push(multiple);

}

//*************************************************
// Member function divide() divides the two       *
// top values of the stack and then pushes        *
// their quotient back into the stack.            *                             *
//*************************************************

void MathStack::divide()
{
    int divide,a,b;

    if (!isEmpty())
        pop(a);
    else
    {
        cout << "\nThe stack is empty!!!" << endl;
        return;
    }


    if(!isEmpty())
        pop(b);
    else
    {
        push(a);
        cout << "\nERROR! The stack only has one integer!!!" << endl;
        return;
    }

    if (a == 0 || b == 0)
    {
        cout << "\nERROR! Cannot divide by 0!" << endl;
        push(b);
        push(a);
        return;
    }
    else
    {
        divide = a / b;
        push(divide);
    }

}

//*************************************************
// Member function display() display the whole    *
// stack.                                         *
//*************************************************

void MathStack::display()
    {
        StackNode *nodePtr;

        nodePtr = top;

        if (isEmpty())
        {
            cout << "\nERROR! The stack is empty!!!" << endl;
            return;
        }
        while (nodePtr)
        {
            cout << nodePtr->value << endl;

            nodePtr = nodePtr->next;
        }
}