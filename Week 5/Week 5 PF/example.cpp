#include <iostream>
using namespace std;
int add (int num1, int num2);
float division (float num1, float num2);
int maximum (int num1, int num2);
main()
{
	int num1;
	int num2;
	int sum;
	float answer;
	int comparison;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	sum = add (num1, num2);
	cout << "Sum is: " << sum << endl;
	answer = division (num1, num2);
	cout << "Quotient is: " << answer << endl;
	comparison = maximum (num1, num2);
	cout << comparison << " is greater." << endl;
}
int add (int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}
float division (float num1, float num2)
{
	float answer;
	answer = num1/num2;
	return answer;
}
int maximum (int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	if (num2 > num1)
	{
		return num2;
	}
	return 0;
}