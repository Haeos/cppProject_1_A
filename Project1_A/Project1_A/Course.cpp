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

void Course::setPrereqs(const int array[], int elements) {

    for (int i = 0; i < elements; ++i)
    {
      preReq.push_back(array[i]);
    }

}

void Course::printCourse() const {

  cout << fixed << showpoint << setprecision(2);
  cout << PREFIX << getCourseNumber() << " - " << getCourseName() << " ("
	  << getCourseUnits() << " units, ";
  if (isTransferable())
	  cout << "transferable";
  else
	  cout << "not transferable";
  cout << ")" << endl;
}

void Course::printPrereqs() const
{
	cout << PREFIX << getCourseNumber() << " - Prerequisites: ";
	size_t vSize = static_cast<int>(preReq.size());
	for (size_t i = 0; i < vSize; i++)
	{
		if (i > 0)
			cout << " or ";
		cout << PREFIX << preReq.at(i);
	}
	cout << endl;
}

Course::~Course() {}
