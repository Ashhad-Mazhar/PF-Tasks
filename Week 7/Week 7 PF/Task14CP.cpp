#include <iostream>

using namespace std;

float calculateMoney(int age, float machinePrice, int toyPrice);
void printResult(float savedMoney, float machinePrice);

main()
{
	int age, toyPrice;
	float machinePrice, savedMoney;
	cout << "Enter Lily's age: ";
	cin >> age;
	cout << "Enter the price of the machine: ";
	cin >> machinePrice;
	cout << "Enter the unit price of each toy: ";
	cin >> toyPrice;
	savedMoney = calculateMoney(age, machinePrice, toyPrice);
	printResult(savedMoney, machinePrice);
}

float calculateMoney(int age, float machinePrice, int toyPrice)
{
	float savedMoney = 0;
	int increment = 10;
	for (int i = 2; i <= age; i = i + 2)
	{
		savedMoney = savedMoney + increment;
		increment = increment + 10;
		savedMoney = savedMoney - 1;
	}
	for (int j = 1; j <= age; j = j + 2)
	{
		savedMoney = savedMoney + toyPrice;
	}
	return savedMoney;
}

void printResult(float savedMoney, float machinePrice)
{
	float difference;
	difference = savedMoney - machinePrice;
	if (savedMoney < machinePrice)
	{
		difference = difference * -1;
		cout << "No! {" << difference << "}";
	}
	else if (savedMoney >= machinePrice)
	{
		cout << "Yes! {" << difference << "}";
	}
}