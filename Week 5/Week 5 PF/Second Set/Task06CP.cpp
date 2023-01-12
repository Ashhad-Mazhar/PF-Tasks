#include <iostream>
using namespace std;
void numToEnglish (int num);
string firstString (int digit2);
string secondString (int digit1);
main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	numToEnglish (num);
}
void numToEnglish (int num)
{
	
	int digit1;
	int digit2;
	string string1;
	string string2;
	digit1 = num%10;
	num = num-digit1;
	digit2 = num;
	string1 = firstString (digit2);
	string2 = secondString (digit1);
	cout << string1 << " " << string2;
}
string firstString (int digit2)
{
	string string1;
	if (digit2 == 10)
	{
		string1 = "Ten";
	}
	if (digit2 == 20)
	{
		string1 = "Twenty";
	}
	if (digit2 == 30)
	{
		string1 = "Thirty";
	}
	if (digit2 == 40)
	{
		string1 = "Fourty";
	}
	if (digit2 == 50)
	{
		string1 = "Fifty";
	}
	if (digit2 == 60)
	{
		string1 = "Sixty";
	}
	if (digit2 == 70)
	{
		string1 = "Seventy";
	}
	if (digit2 == 80)
	{
		string1 = "Eighty";
	}
	if (digit2 == 90)
	{
		string1 = "Ninety";
	}
	return string1;
}
string secondString (int digit1)
{
	string string2;
	if (digit1 == 1)
	{
		string2 = "One";
	}
	if (digit1 == 2)
	{
		string2 = "Two";
	}
	if (digit1 == 3)
	{
		string2 = "Three";
	}
	if (digit1 == 4)
	{
		string2 = "Four";
	}
	if (digit1 == 5)
	{
		string2 = "Five";
	}
	if (digit1 == 6)
	{
		string2 = "Six";
	}
	if (digit1 == 7)
	{
		string2 = "Seven";
	}
	if (digit1 == 8)
	{
		string2 = "Eight";
	}
	if (digit1 == 9)
	{
		string2 = "Nine";
	}
	return string2;
}