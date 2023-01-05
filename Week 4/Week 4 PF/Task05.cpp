#include <iostream>
using namespace std;
void isEven (int number);
main()
{
	int number;
	while (true)
	{
		cout << "Enter a number: ";
		cin >> number;
		isEven (number);
	}
}

void isEven (int number)
{
	if (number%2 == 0)
	{
		cout << "Number is even." << endl;
	}
	if (number%2 != 0)
	{
		cout << "Number is odd." << endl;
	}
}
