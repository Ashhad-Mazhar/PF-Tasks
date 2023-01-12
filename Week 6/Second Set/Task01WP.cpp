#include <iostream>

using namespace std;

char calculateGrade (int marks);

main ()
{
	int marks;
    char grade;
    cout << "Enter marks: ";
    cin >> marks;
    grade = calculateGrade (marks);
    cout << "Your grade is " << grade << "." << endl;
}

char calculateGrade (int marks)
{
    char grade;
    if (marks > 85)
    {
        grade = 'A';
    }
    else if (marks > 80 && marks <=85)
    {
        grade = 'B';
    }
    else if (marks > 70 && marks <=80)
    {
        grade = 'C';
    }
    else if (marks > 60 && marks <=70)
    {
        grade = 'D';
    }
    else if (marks >= 50 && marks <=60)
    {
        grade = 'E';
    }
    else if (marks < 50)
    {
        grade = 'F';
    }
    return grade;
}