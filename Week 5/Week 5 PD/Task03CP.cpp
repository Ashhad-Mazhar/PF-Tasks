#include <iostream>

using namespace std;

float taxCalculator(char typeCode, float itemPrice);

main ()
{
    float finalPrice, itemPrice, taxRate;
    char typeCode;
    cout << "Enter the price of the vehicle: ";
    cin >> itemPrice;
    cout << "Enter the vehicle type code: ";
    cin >> typeCode;
    finalPrice = taxCalculator(typeCode, itemPrice);
    cout << "The final price on a vehicle of type " << typeCode << " after adding the tax is $" << finalPrice << ".";
}

float taxCalculator(char typeCode, float itemPrice)
{
    float taxAmount, taxRate, finalPrice;
        if (typeCode == 'M')
        {
            taxRate = 6;
        }
        if (typeCode == 'E')
        {
            taxRate = 8;
        }
        if (typeCode == 'S')
        {
            taxRate = 10;
        }
        if (typeCode == 'V')
        {
            taxRate = 12;
        }
        if (typeCode == 'T')
        {
            taxRate = 15;
        }
    taxAmount = itemPrice * taxRate/100;
    finalPrice = itemPrice + taxAmount;
    return finalPrice;
}