#include <iostream>
using namespace std;
main ()
{
	int dollar;
	int input;
	int rupees;
	dollar = 200;
	cout << "Enter Dollars: ";
	cin >> input;
	rupees = input*dollar;
	cout << "In Rupees: " << rupees;
}