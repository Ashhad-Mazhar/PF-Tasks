#include <iostream>
using namespace std;
bool symmetrical (int num);
main()
{
	int num;
	bool condition;
	cout << "Enter a three digit number: ";
	cin >> num;
	condition = symmetrical (num);
	if (condition == true)
	{
		cout << num << " is symmetrical." << endl;
	}
	if (condition != true)
	{
		cout << num << " is not symmetrical." << endl;
	}
}
bool symmetrical (int num)
{
	int digit1;
	int digit2;
	int digit3;
	digit1 = num%10;
	num = num-digit1;
	digit2 = num%100;
	num = num-digit2;
	digit2 = digit2/10;
	digit3 = num/100;
	if (digit1 == digit3)
	{
		return true;
	}
	if (digit1 != digit3)
	{
		return false;
	}
	return 0;
	
}