#include <iostream>

using namespace std;

string oddish (int num);

main()
{
	int num;
	string result;
	cout << "Enter a number: ";
	cin >> num;
	result = oddish (num);
	cout << result << endl;
}

string oddish (int num)
{
	string result;
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int digit5;
	int sum;
	sum = 0;
	digit1 = num % 10;
	num = num - digit1;
	digit2 = num % 100;
	num = num - digit2;
	digit2 = digit2/10;
	digit3 = num % 1000;
	num = num - digit3;
	digit3 = digit3/100;
	digit4 = num % 1000;
	num = num - digit4;
	digit4 = digit4/1000;
	digit5 = num/10000;
	sum = digit1 + digit2 + digit3 + digit4 + digit5;
	if (sum % 2 == 0)
	{
		result = "Evenish";
	}
	if (sum % 2 != 0)
	{
		result = "Oddish";
	}
	return result;
}