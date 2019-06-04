// GradedActivity.cpp
// Matheus Muniz da Silva
// Chapter 15 - Programming Assignment
// 04-01-19

#include "GradedActivity.h"

char GradedActivity::getLetterGrade() const
{
    char letterGrade;

    if (score > 89)
        letterGrade = 'A';
    else if (score > 79)
        letterGrade = 'B';
    else if (score > 69)
        letterGrade = 'C';
    else if (score > 59)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    return letterGrade;
}