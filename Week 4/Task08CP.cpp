#include <iostream>
using namespace std;
void IsEqual (int x, int y);

main ()
{
	int firstNumber;
	int secondNumber;
	cout << "Enter an integer: ";
	cin >> firstNumber;
	cout << "Enter another integer: ";
	cin >> secondNumber;
	IsEqual (firstNumber, secondNumber);
}

void IsEqual (int x, int y)
{
	if (x == y)
	{
		cout << "True" << endl;
	}
	if (x != y)
	{
		cout << "False" << endl;
	}
}