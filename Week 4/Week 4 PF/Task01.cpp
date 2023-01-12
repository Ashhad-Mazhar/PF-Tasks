#include <iostream>
using namespace std;
void add(int number1, int number2);
void multiplication(int number1, int number2);
void subtract(int number1, int number2);

main()
{
	int number1;
	int number2;
	char operation;
	cout << "Enter Number 1: ";
	cin >> number1;
	cout << "Enter Number 2: ";
	cin >> number2;
	cout << "Enter Operator: ";
	cin >> operation;
	if (operation == '+')
	{
		add(number1, number2);
	}
	if (operation == '*')
	{
		multiplication(number1, number2);
	}
	if (operation == '-')
	{
		subtract(number1, number2);
	}
}

void add(int number1, int number2)
{
	int sum;
	sum = number1+number2;
	cout << "Sum is: " << sum << endl;
}

void multiplication(int number1, int number2)
{
	int product;
	product = number1*number2;
	cout << "Product is: " << product << endl;
}

void subtract(int number1, int number2)
{
	int difference;
	difference = number1-number2;
	cout << "Difference is: " << difference << endl;
}