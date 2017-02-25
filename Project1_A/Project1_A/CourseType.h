/*
   Viridian Dynamics
   Josh Downs
   Richie Stanley
   Phan, Barry


   CS 250
   27 Feb 2017

   Project 1 Part A
 */


#ifndef COURSETYPE_H
#define COURSETYPE_H


#include <string>

using namespace std;

const string PREFIX = "CS A";

class CourseType
{
public:
	CourseType();
	CourseType(const string& newCourseName,
		int newCourseNum, double newUnits);

	string getCourseName() const;
	int getCourseNumber() const;
	double getCourseUnits() const;
	string getPrefix() const;

	void setCourseName(const string& newName);
	void setCourseNumber(int newNum);
	void setCourseUnits(double newUnits);

	void printCourse();

private:
	string courseName;
	int courseNum;
	double units;
};



#endif
