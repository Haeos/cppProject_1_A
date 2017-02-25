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

    void setPrerequisites(const int array[], int elements);

    void printCourse() const;

    ~Course();

    private
        vector<int> preReq;
    char transferable;
};




#endif