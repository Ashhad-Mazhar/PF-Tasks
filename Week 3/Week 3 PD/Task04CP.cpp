#include <iostream>
using namespace std;
main ()
{
	string name;
	int marks1;
	int marks2;
	int marks3;
	int marks4;
	int marks5;
	float obtMarks;
	float totalMarks;
	float percentage;
	totalMarks = 500;
	cout << "Enter Your Name: ";
	cin >> name;
	cout << "Enter subject 01 marks: ";
	cin >> marks1;
	cout << "Enter subject 02 marks: ";
	cin >> marks2;
	cout << "Enter subject 03 marks: ";
	cin >> marks3;
	cout << "Enter subject 04 marks: ";
	cin >> marks4;
	cout << "Enter subject 05 marks: ";
	cin >> marks5;
	obtMarks = marks1+marks2+marks3+marks4+marks5;
	percentage = (obtMarks/totalMarks)*100;
	cout << "Your Name: " << name << endl;
	cout << "Your percentage: " << percentage;
}