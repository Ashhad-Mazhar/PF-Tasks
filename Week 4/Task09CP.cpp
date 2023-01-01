#include <iostream>
using namespace std;
void Reverse (string condition);

main ()
{
	string condition;
	cout << "Enter Text: ";
	cin >> condition;
	Reverse (condition);
}

void Reverse (string condition)
{
	if (condition == "True")
	{
		cout << "False" << endl;
	}
	if (condition == "False")
	{
		cout << "True" << endl;
	}
}