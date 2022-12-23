#include <iostream>
using namespace std;
main ()
{
	float coinToRupee;
	float vegetablePrice;
	float fruitPrice;
	int totalVegetables;
	int totalFruits;
	float vegetableEarnings;
	float fruitEarnings;
	float totalEarnings;
	float totalEarningsRupee;
	coinToRupee = 1.94;
	cout << "Enter Vegetable price per kilogram: ";
	cin >> vegetablePrice;
	cout << "Enter Fruit price per kilogram: ";
	cin >> fruitPrice;
	cout << "Enter total kilograms of Vegetables sold: ";
	cin >> totalVegetables;
	cout << "Enter total kilograms of Fruits sold: ";
	cin >> totalFruits;
	vegetableEarnings = vegetablePrice*totalVegetables;
	fruitEarnings = fruitPrice*totalFruits;
	totalEarnings = vegetableEarnings + fruitEarnings;
	totalEarningsRupee = totalEarnings/coinToRupee;
	cout << "Total Earnings: " << totalEarningsRupee;
}