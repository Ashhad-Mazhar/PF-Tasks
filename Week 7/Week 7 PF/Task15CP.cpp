#include <iostream>

using namespace std;

float calculatePrice(float inheritanceMoney, int year);
void printOutput (float inheritanceMoney, float requiredMoney);

main()
{
	float inheritanceMoney, requiredMoney;
	int year;
	cout << "Enter inheritance money: ";
	cin >> inheritanceMoney;
	cout << "Enter year to live until: ";
	cin >> year;
	requiredMoney = calculatePrice(inheritanceMoney, year);
	printOutput (inheritanceMoney, requiredMoney);
}

float calculatePrice(float inheritanceMoney, int year)
{
	float requiredMoney = 0;
	for (int i = 1800; i <= year; i = i + 2)
	{
		requiredMoney = requiredMoney + 12000;
	}
	for (int j = 1801; j <= year; j = j + 2)
	{
		int age = 19;
		requiredMoney = requiredMoney + 12000 + 50 * age;
		age = age + 2;
	}
	return requiredMoney;
}

void printOutput (float inheritanceMoney, float requiredMoney)
{
	float difference = inheritanceMoney - requiredMoney;
	if (inheritanceMoney >= requiredMoney)
	{
		cout << "Yes! He will live a carefree life and will have " << difference << " dollars left." << endl;
	}
	else if (inheritanceMoney < requiredMoney)
	{
		difference = -1 * difference;
		cout << "He will need " << difference << " dollars to survive." << endl;
	}
}