#include <iostream>

using namespace std;

float payableAmount (string day, string month, float amount);

main ()
{
	float amount, payable;
    string day, month;
    cout << "Enter total purchase amount: ";
    cin >> amount;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    payable = payableAmount (day, month, amount);
    cout << "Payable amount is: " << payable << endl;
}

float payableAmount (string day, string month, float amount)
{
    float payable, discount = 0;
    if (day == "Sunday")
    {
        if (month == "October")
        {
            discount = (amount * 10)/100;
        }
    }
    payable = amount - discount;
    return payable;
}