#include <iostream>

using namespace std;

float lowestPrice (int distance, string time);

main ()
{
	string time;
    int distance;
    float price;
    cout << "Enter distance in kilometers: ";
    cin >> distance;
    cout << "Enter time of day: ";
    cin >> time;
    price = lowestPrice (distance, time);
    cout << "Lowest price is: " << price << endl;
}

float lowestPrice (int distance, string time)
{
    float price;
    if (distance < 20)
    {
        if (time == "day")
        {
            price = (0.79 * distance) + 0.70;
        }
        else if (time == "night")
        {
            price = (0.9 * distance) + 0.70;
        }
    }
    if (distance >= 20 && distance < 100)
    {
        price = 0.09 * distance;
    }
    if (distance >= 100)
    {
        price = 0.06 * distance;
    }
    return price;
}