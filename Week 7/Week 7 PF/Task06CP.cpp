#include <iostream>

using namespace std;

int frequencyChecker (int number, int digit);

main ()
{
	int number, digit, frequency;
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter digit: ";
	cin >> digit;
	frequency = frequencyChecker (number, digit);
	cout << "Frequency is: " << frequency << endl;
}

int frequencyChecker (int number, int digit)
{
	int frequency = 0;
	int remain;
	while ((number/10) > 0)
	{
		remain = number % 10;
		number = number/10;
		if (remain == digit)
		{
			frequency = frequency + 1;
		}
		if (number == digit)
		{
			frequency = frequency + 1;
		}
	}
	return frequency;
}