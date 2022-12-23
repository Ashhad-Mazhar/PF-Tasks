#include <iostream>
using namespace std;
main ()
{
	int rollNumber;
	float aggregate;
	char grade;
	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your roll number: ";
	cin >> rollNumber;
	cout << "Enter your aggregate: ";
	cin >> aggregate;
	cout << "Enter your grade: ";
	cin >> grade;
	cout << "You have entered: " << name << endl;
	cout << "You have entered: " << rollNumber << endl;
	cout << "You have entered: " << aggregate << endl;
	cout << "You have entered: " << grade;
}