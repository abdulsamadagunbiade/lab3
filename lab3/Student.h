#pragma once
#include <string> 
using namespace std;
class Student
{
private:

	string Name;

	double TotalGrade;

public:

	Student(string);

	void AddGrade(double);



	double getTotalGrade();

	double CalcAverage(int);

	string getLetterGrade(double);
};