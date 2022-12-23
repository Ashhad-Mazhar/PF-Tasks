#include <iostream>
using namespace std;
main ()
{
	int input;
	int sum;
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	cout << "Enter Four Digit Number: ";
	cin >> input;
	digit1 = input%10;
	input = input-digit1;
	digit2 = input%100;
	input = input-digit2;
	digit2 = digit2/10;
	digit3 = input%1000;
	input = input-digit3;
	digit3 = digit3/100;
	digit4 = input%10000;
	digit4 = digit4/1000;
	sum = digit1+digit2+digit3+digit4;
	cout << "Sum: " << sum;
}