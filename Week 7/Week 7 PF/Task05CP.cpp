#include <iostream>

using namespace std;

int totalDigits (int number);

main ()
{
	int number, digits;
	cout << "Enter number: ";
	cin >> number;
	digits = totalDigits (number);
	cout << "Number of digits: " << digits << endl;
}

int totalDigits (int number)
{
	int digits = 1;
	while ((number/10) > 0)
	{
		digits = digits + 1;
		number = number/10;
	}
	return digits;
}