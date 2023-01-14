#include <iostream>

using namespace std;

float checkCost (string city, string product, int quantity);

main ()
{
	string city, product;
    int quantity;
    float cost;
    cout << "Enter product: ";
    cin >> product;
    cout << "Enter city: ";
    cin >> city;
    cout << "Enter quantity: ";
    cin >> quantity;
    cost = checkCost (city, product, quantity);
    cout << "Total cost is: " << cost << endl;
}

float checkCost (string city, string product, int quantity)
{
    float cost;
    if (product == "Coffee")
    {
        if (city == "Sofia")
        {
            cost = quantity * 0.5;
        }
        else if (city == "Plovdiv")
        {
            cost = quantity * 0.4;
        }
        else if (city == "Varna")
        {
            cost = quantity * 0.45;
        }
    }
    else if (product == "Water")
    {
        if (city == "Sofia")
        {
            cost = quantity * 0.8;
        }
        else if (city == "Plovdiv")
        {
            cost = quantity * 0.7;
        }
        else if (city == "Varna")
        {
            cost = quantity * 0.7;
        }
    }
    else if (product == "Beer")
    {
        if (city == "Sofia")
        {
            cost = quantity * 1.2;
        }
        else if (city == "Plovdiv")
        {
            cost = quantity * 1.15;
        }
        else if (city == "Varna")
        {
            cost = quantity * 1.1;
        }
    }
    else if (product == "Sweets")
    {
        if (city == "Sofia")
        {
            cost = quantity * 1.45;
        }
        else if (city == "Plovdiv")
        {
            cost = quantity * 1.3;
        }
        else if (city == "Varna")
        {
            cost = quantity * 1.35;
        }
    }
    else if (product == "Peanuts")
    {
        if (city == "Sofia")
        {
            cost = quantity * 1.6;
        }
        else if (city == "Plovdiv")
        {
            cost = quantity * 1.5;
        }
        else if (city == "Varna")
        {
            cost = quantity * 1.55;
        }
    }
    return cost;
}