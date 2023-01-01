#include <iostream>
using namespace std;
void bill (int redRose, int whiteRose, int tulip);

main ()
{
	int redRose;
	int whiteRose;
	int tulip;
	cout << "Enter number of red roses: ";
	cin >> redRose;
	cout << "Enter number of white roses: ";
	cin >> whiteRose;
	cout << "Enter number of tulips: ";
	cin >> tulip;
	bill (redRose, whiteRose, tulip);
}

void bill (int redRose, int whiteRose, int tulip)
{
	float totalRedRose;
	float totalWhiteRose;
	float totalTulip;
	float totalPrice;
	float priceAfterDiscount;
	totalRedRose = redRose * 2.0;
	totalWhiteRose = whiteRose * 4.1;
	totalTulip = tulip * 2.5;
	totalPrice = totalRedRose + totalWhiteRose + totalTulip;
	priceAfterDiscount = totalPrice * 0.8;
	cout << "Original Price: " << totalPrice << endl;
	if (totalPrice > 200)
	{
		cout << "Price after discount: " << priceAfterDiscount << endl;
	}
}