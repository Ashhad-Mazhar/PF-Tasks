#include <iostream>

using namespace std;

float findPercentage (int totalMarks);
string findGrade (float percentage);

main ()
{
    int englishMarks, mathsMarks, chemistryMarks, socialScienceMarks, biologyMarks, totalMarks;
    float percentage;
    string grade, name;
    cout << "Enter English marks: ";
    cin >> englishMarks;
    cout << "Enter Maths marks: ";
    cin >> mathsMarks;
    cout << "Enter Chemistry marks: ";
    cin >> chemistryMarks;
    cout << "Enter Social Science marks: ";
    cin >> socialScienceMarks;
    cout << "Enter Biology marks: ";
    cin >> biologyMarks;
    cout << "Enter name: ";
    cin >> name;
    totalMarks = englishMarks + mathsMarks + chemistryMarks + socialScienceMarks + biologyMarks;
    percentage = findPercentage (totalMarks);
    grade = findGrade (percentage);
    cout << "Your total marks are: " << totalMarks << endl;
    cout << "Your percentage is: " << percentage << endl;
    cout << "Your grade is: " << grade << endl;
    cout << "Your name is: " << name << endl;
}

float findPercentage (int totalMarks)
{
    float percentage;
    percentage = (totalMarks * 100)/500;
    return percentage;
}

string findGrade (float percentage)
{
    string grade;
    if (percentage >= 90 && percentage <= 100)
    {
        grade = "A+";
    }
    else if (percentage >= 80 && percentage < 90)
    {
        grade = "A";
    }
    else if (percentage >= 70 && percentage < 80)
    {
        grade = "B+";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        grade = "B";
    }
    else if (percentage >= 50 && percentage < 60)
    {
        grade = "C";
    }
    else if (percentage >= 40 && percentage < 50)
    {
        grade = "D";
    }
    else if (percentage < 40)
    {
        grade = "F";
    }
    return grade;
}