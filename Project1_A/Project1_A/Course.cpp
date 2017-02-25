//Course.cpp
#include "CourseType.h"
#include "Course.h"

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
Course::Course() : transferable('N') {}

Course::Course(const string& newName, int newNum, double newUnits,
  const vector<int>& newPreReq, char transferableCourse)
  : CourseType(newName, newNum, newUnits), preReq(newPreReq),
  transferable(transferableCourse) {}

bool Course::isTransferable() const { return (transferable == 'Y'); }

void Course::setTransfer(char newTransferable) {
    transferable = newTransferable;
}

void setPrereqs(const int array[], int elements) {

    for (int arrayNum = 0; i < elements; ++i)
    {
      preReq.push_back(*arrayNum[i]);
    }

}

void printCourse() const {



  cout << fixed << showpoint << setprecision(2);
  cout << PREFIX << getCourseNumber() << " - " << getCourseName() << " ("
    << getCourseUnits() << "units, "
    << (if (isTransferable()) ? "transferable" : "not transferable") << ")"
    << endl;
}

Course::~Course() {}
