#include <iostream>
using namespace std;
void totalAmount (string day, int amount);
main()
{
	string day;
	int amount;
	while (true)
	{
		cout << "Enter Day: ";
		cin >> day;
		cout << "Enter Total Purchase Amount: ";
		cin >> amount;
		totalAmount (day, amount);
	}
}

void totalAmount (string day, int amount)
{
	if (day == "sunday")
	{
		int payableAmount;
		payableAmount = 0.9*amount;
		cout << "Payable Amount is: " << payableAmount << endl;
	}
	if (day != "sunday")
	{
		cout << "Payable Amount is: " << amount << endl;
	}
}