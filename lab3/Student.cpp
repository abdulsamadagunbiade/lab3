#include "Student.h"
#include <iostream> 

Student::Student(string Name)

{

	this->Name;

	this->TotalGrade = 0;

}



void Student::AddGrade(double Grade)

{

	this->TotalGrade += Grade;

}

double Student::getTotalGrade()

{

	return this->TotalGrade;

}

double Student::CalcAverage(int number)

{

	return this->TotalGrade / number;

}



string Student::getLetterGrade(double GradeRecieved)

{

	if (GradeRecieved >= 100)

	{

		return "A+";

	}

	else if (GradeRecieved >= 93)

	{

		return "A";

	}

	else if (GradeRecieved >= 90)

	{

		return "A-";

	}

	else if (GradeRecieved >= 87)

	{

		return "B+";

	}

	else if (GradeRecieved >= 83)

	{

		return "B";

	}

	else if (GradeRecieved >= 80)

	{

		return "B-";

	}

	else if (GradeRecieved >= 77)

	{

		return "C+";

	}

	else if (GradeRecieved >= 73)

	{

		return "C";

	}

	else if (GradeRecieved >= 70)

	{

		return "C-";

	}

	else if (GradeRecieved >= 67)

	{

		return "D+";

	}

	else if (GradeRecieved >= 63)

	{

		return "D";

	}

	else if (GradeRecieved >= 60)

	{

		return "D-";

	}

	else

	{

		return "F";

	}

}
