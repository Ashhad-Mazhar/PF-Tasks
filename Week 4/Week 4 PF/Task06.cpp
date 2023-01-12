#include <iostream>
using namespace std;
void greaterNumber (int number1, int number2);
main()
{
	int number1;
	int number2;
	while (true)
	{
		cout << "Enter a number: ";
		cin >> number1;
		cout << "Enter a number: ";
		cin >> number2;
		greaterNumber (number1, number2);
	}
}

void greaterNumber (int number1, int number2)
{
	if (number1<number2)
	{
		cout << number2 << " is greater." << endl;
	}
	if (number2<number1)
	{
		cout << number1 << " is greater." << endl;
	}
}