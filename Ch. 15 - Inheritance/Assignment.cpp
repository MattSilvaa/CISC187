// Assignment.cpp
// Matheus Muniz da Silva
// Chapter 15 - Programming Assignment
// 04-01-19

#include <iomanip>
#include <iostream>
#include "Assignment.h"

using namespace std;

//*********************************************************************
// setCodeExecution accepts a double amount that's copied to the
// codeExecution member
//*********************************************************************
void Assignment::setCodeExecution(double c)
{
    if ( c >= 0 && c <= 50 )
        codeExecution = c;
    else
        exit(EXIT_FAILURE);
}

//*********************************************************************
// setModularCode accepts a double amount that's copied to the
// modularCode member
//*********************************************************************
void Assignment::setModularCode (double m)
{
    if ( m >= 0 && m <= 20)
        modularCode = m;
    else
        exit(EXIT_FAILURE);
}

//*********************************************************************
// setCommentsFormatting accepts a double amount that's copied to the
// commentsFormatting member
//*********************************************************************
void Assignment::setCommentsFormatting (double cf)
{
    if (cf >= 0 && cf <= 10)
        commentsFormatting = cf;
    else
        exit(EXIT_FAILURE);
}

//*********************************************************************
// setIOFormatting accepts a double amount that's copied to the
// ioProfessional member
//*********************************************************************
void Assignment::setIOFormatting (double io)
{
    if (io >= 0 && io <= 10)
        ioProfessional = io;
    else
        exit(EXIT_FAILURE);
}

//*********************************************************************
// setJing accepts a double amount that's copied to the
// jing member
//*********************************************************************
void Assignment::setJing (double j)
{
    if ( j >= 0 &&  j <= 10 )
        jing = j;
    else
        exit(EXIT_FAILURE);
}

//*********************************************************************
// getCodeExecution returns the value of codeExecution
//*********************************************************************
double Assignment::getCodeExecution () const
{
    return codeExecution;
}

//*********************************************************************
// getModularCode returns the value of  modularCode
//*********************************************************************
double Assignment::getModularCode () const
{
    return modularCode;
}

//*********************************************************************
// getCommentsFormatting returns the value of commentsFormatting
//*********************************************************************
double Assignment::getCommentsFormatting () const
{
    return commentsFormatting;
}

//*********************************************************************
// getIOFormatting returns the value of ioProfessional
//*********************************************************************
double Assignment::getIOFormatting () const
{
    return ioProfessional;
}

//*********************************************************************
// getJing returns the value of jing
//*********************************************************************
double Assignment::getJing () const
{
    return jing;
}

//*********************************************************************
// getTotal accepts 5 arguments and returns their sum and the overall
// letter grade.
//*********************************************************************
void Assignment::getTotal(double a, double b, double c, double d, double e)
{

    setScore(a+b+c+d+e);
    cout << "Calculated Total: " << getScore() << endl;
    cout << "Grade: " << getLetterGrade() << endl;
}