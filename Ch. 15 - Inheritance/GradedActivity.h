// GradedActivity.h
// Matheus Muniz da Silva
// Chapter 15 - Programming Assignment
// 04-01-19

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

//GradedActivity class declaration

class GradedActivity
{
private:
    double score; // To Hold the numeric score
public:
    // Default constructor
    GradedActivity()
    {
        score = 0.0;
    }

    // Constructor
    GradedActivity(double s)
    {
        score = s;
    }

    //Mutator Function
    void setScore (double s)
    {
        score = s;
    }

    // Accessor functions
    double getScore () const
    {
        return score;
    }

    char getLetterGrade() const;
};

#endif