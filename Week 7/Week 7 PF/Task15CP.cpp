#include <iostream>

using namespace std;

float calculatePrice(float money, int year);

main()
{
	float money, price;
	int year;
	cout << "Enter inheritance money: ";
	cin >> money;
	cout << "Enter year to live until: ";
	cin >> year;
	price = calculatePrice(money, year);
}

float calculatePrice(float money, int year)
{
	int startingYear = 1800;
	float requiredMoney = 0;
	for (i = 1800; i <= year; i = i + 2)
	{
		requiredMoney = requiredMoney + 12000;
	}
	for (i = 1801; i <= year; i = i + 2)
	{
		requiredMoney = requiredMoney + (12000 + 50 * 
	}
}