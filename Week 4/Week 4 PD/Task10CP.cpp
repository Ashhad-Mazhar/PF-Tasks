#include <iostream>
using namespace std;
void ticketPrice ();

main ()
{
	ticketPrice ();
}

void ticketPrice ()
{
	string country;
	float price;
	while (true)
	{
		cout << "Enter the name of your country: ";
		cin >> country;
		cout << "Enter ticket price in dollars: ";
		cin >> price;
		float discount;
		float finalPrice;
		if (country == "Pakistan")
		{
			discount = price*0.05;
		}
		if (country == "Ireland")
		{
			discount = price*0.1;
		}
		if (country == "India")
		{
			discount = price*0.2;
		}
		if (country == "England")
		{
			discount = price*0.3;
		}
		if (country == "Canada")
		{
			discount = price*0.45;
		}
		finalPrice = price - discount;
		cout << "Final Price is: " << finalPrice << endl;
	}
}