#include <iostream> 
#include "Student.h" 
using namespace std;
int main()

{

	double grade, average;

	int entergrade;

	string Name, lettergrade;

	cout << "Welcome! Please follow the instructions below: " << endl;

	cout << "==================" << endl << endl;

	cout << "Enter the student name ==>" << endl;

	getline(cin, Name);



	cout << "Enter the number of grades==> " << endl;

	cin >> entergrade;

	Student stud(Name);

	int i = 1;

	while (i <= entergrade)

	{

		cout << "Enter your grade no" << i << " : ";

		cin >> grade;

		stud.AddGrade(grade);

		i++;

	}

	average = stud.CalcAverage(entergrade);

	lettergrade = stud.getLetterGrade(average);

	cout << "Student name ==> " << Name << endl;

	cout << "The average grade is ==> " << average << endl;

	cout << "The letter grade you got is ==> " << lettergrade << endl;

}