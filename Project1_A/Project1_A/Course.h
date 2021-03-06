/*
Viridian Dynamics

Josh Downs
Richie Stanley
Brian Nguyen
Barry Phan

CS 250
27 Feb 2017

Project 1 Part A
*/


#ifndef COURSE_H
#define COURSE_H
#include "CourseType.h"

#include <string>
#include <vector>

using namespace std;

class Course : public CourseType
{
public:
    Course();
    Course(const string& newName, int newNum, double newUnits,
        const vector<int>& preReq, char transferableCourse);

    bool isTransferable() const;

    void setTransfer(char transferable);

    void setPrereqs(const int array[], int elements);

    void printCourse() const;

    void printPrereqs() const;

    ~Course();

private:
    vector<int> preReq;
    char transferable;
};




#endif