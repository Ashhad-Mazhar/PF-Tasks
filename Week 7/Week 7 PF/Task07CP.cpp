#include <iostream>
#include <cmath>

using namespace std;

int digitSum (int number);
int totalDigits (int number);

main ()
{
	int number, sum;
	cout << "Enter a number: ";
	cin >> number;
	sum = digitSum (number);
	cout << "Sum is: " << sum << endl;
}

int digitSum (int number)
{
	int sum = 0, x, digit, noOfDigits, y, divisor;
	noOfDigits = totalDigits (number);
	y = noOfDigits - 1;
	divisor = pow(10, y);
	while ((number/10) > 0)
	{
		digit = number / divisor;
		cout << "Digit: " << digit << endl;
		number = number % divisor;
		cout << "Number: " << number << endl;
		sum = sum + digit;
		cout << "Running" << endl;
		divisor = divisor/10;
	}
	return sum;
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