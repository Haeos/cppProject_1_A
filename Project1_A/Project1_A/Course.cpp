#include "Course.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
Course::Course() : transferable('N') {}

Course::Course(const string& newName, int newNum, double newUnits,
    const vector<int>& preReq, char transferableCourse)
    : name(newName), courseNum(newNum), units(newUnits),
    preReq() {}

bool Course::isTransferable() const { return (transferable == 'Y'); }

void Course::setTransfer(char newTransferable) {
    transferable = newTransferable;
}



void Course::setPrereqs(const int array[], int elements) {

    for (int arrayNum = 0; i < elements; ++i)
    {
        preReq.push_back(*arrayNum);
    }

}

void Course::printCourse() const {



    cout << fixed << showpoint << setprecision(2);
    cout << PREFIX << getCourseNumber() << " - " << getCourseName() << " ("
        << getCourseUnits() << "units, "
        << (if (isTransferable()) ? "transferable" : "not transferable") << ")"
        << endl;
}

void Course::printPrereqs() const
{

}



Course::~Course() {}