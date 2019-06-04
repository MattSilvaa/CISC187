// Assignment.h
// Matheus Muniz da Silva
// Chapter 15 - Programming Assignment
// 04-01-19

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include "GradedActivity.h"

// Inventory class declaration
class Assignment: public GradedActivity
{
private:
    // Doubles to hold the various scores
    double codeExecution,
    modularCode,
    commentsFormatting,
    ioProfessional,
    jing;

public:
    // Default Constructor
    Assignment()
    {
        codeExecution = 0;
        modularCode = 0;
        commentsFormatting = 0;
        ioProfessional = 0;
        jing = 0;
    }

    // Constructor #2, accepts and copies memeber values
    // to the appropriate variables
    Assignment (double c, double m, double cf, double io, double j)
    {
        codeExecution = c;
        modularCode = m;
        commentsFormatting = cf;
        ioProfessional = io;
        jing = j;
    }

    // Function Prototypes
    // "Set" Mutator Functions
    void setCodeExecution (double c);
    void setModularCode (double m);
    void setCommentsFormatting (double cf);
    void setIOFormatting (double io);
    void setJing (double j);

    // "Get" Accessor Functions
    // Const specifies that the function won't change any data in the calling object
    double getCodeExecution () const;
    double getModularCode () const;
    double getCommentsFormatting () const;
    double getIOFormatting () const;
    double getJing () const;
    void getTotal(double, double, double, double, double);

};

#endif
