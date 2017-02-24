#include "CourseType.h"

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

CourseType::CourseType() : courseNum(0), units(0) {}
CourseType::CourseType(const string& newCourseName,
	int newCourseNum, double newUnits)
	: courseName(newCourseName),
	  courseNum(newCourseNum),
	  units(newUnits) {}

string CourseType::getCourseName() const { return courseName; }
int CourseType::getCourseNumber() const { return courseNum;  }
double CourseType::getCourseUnits() const { return units; }
string CourseType::getPrefix() const { return PREFIX; }

void CourseType::setCourseName(const string& newName)
{
	courseName = newName;
}

void CourseType::setCourseNumber(int newNum)
{
	courseNum = newNum;
}

void CourseType::setCourseUnits(double newUnits)
{
	units = newUnits;
}

void CourseType::printCourse()
{

}
