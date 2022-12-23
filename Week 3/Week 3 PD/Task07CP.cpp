#include <iostream>
using namespace std;
main ()
{
	string movieName;
	int adultPrice;
	int childPrice;
	int adultSold;
	int childSold;
	float percentage;
	float totalEarning;
	float charity;
	float remainingAmount;
	cout << "Enter Movie Name: ";
	cin >> movieName;
	cout << "Enter Adult Ticket Price: ";
	cin >> adultPrice;
	cout << "Enter Child Ticket Price: ";
	cin >> childPrice;
	cout << "Enter Number of Adult Tickets Sold: ";
	cin >> adultSold;
	cout << "Enter Number of Child Tickets Sold: ";
	cin >> childSold;
	cout << "Enter Percentage to Donate: ";
	cin >> percentage;
	totalEarning = adultPrice*adultSold + childPrice*childSold;
	charity = (percentage*totalEarning)/100;
	remainingAmount = totalEarning-charity;
	cout << endl;
	cout << "___________________________________________" << endl;
	cout << "Total Amount Generated: " << totalEarning << endl;
	cout << "Amount after donation: " << remainingAmount;
}