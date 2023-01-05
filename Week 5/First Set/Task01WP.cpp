#include <iostream>
using namespace std;
void add (int num1, int num2);
main()
{
	int num1;
	int num2;
	cout << "Enter Number 1: ";
	cin >> num1;
	cout << "Enter Number 2: ";
	cin >> num2;
	add (num1, num2);
}

void add (int num1, int num2)
{
	cout << "Sum: " << num1 + num2;
}