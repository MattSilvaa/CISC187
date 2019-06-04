/*
 * Matheus Muniz da Silva
 *
 * Chapter 19, Stacks
 *
 * April 24, 2019
 *
*/

#ifndef MATHSTACK_H
#define MATHSTACK_H

class MathStack
{
private:
    // Structure for stack nodes
    struct StackNode
    {
        int value;        // Value in the node
        StackNode *next; // Pointer to the next node
    };

    StackNode *top;     // Pointer to the stack top


public:
    // Contructor
    MathStack()
    {
        top = nullptr;
    }

    //Destructor
    ~MathStack();

    // Stack operations
    void push (int);
    void pop (int &);
    void add ();
    void subtract ();
    void multiply ();
    void divide();
    void display();
    bool isEmpty();
};

#endif
