#include <iostream>
using namespace std;
void isEligible (int age);

main()
{
	int age;
	while (true)
	{
		cout << "Enter Age: ";
		cin >> age;
		isEligible (age);
	}	
}
void isEligible (int age)
{
	if (age>17)
	{
		cout << "You are eligible to vote." << endl;
	}
	if (age<18)
	{
		cout << "You are not eligible to vote." << endl;
	}
}