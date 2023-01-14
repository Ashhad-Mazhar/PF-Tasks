#include <iostream>

using namespace std;

void checkError (string fruit, string day);
float calculatePrice (string fruit, string day, float quantity);

main ()
{
    string fruit, day;
    float quantity, price;
    cout << "Enter fruit name: ";
    cin >> fruit;
    cout << "Enter day of the week: ";
    cin >> day;
    cout << "Enter quantity: ";
    cin >> quantity;
    checkError (fruit, day);
    price = calculatePrice (fruit, day, quantity);
    cout << "Total price is: " << price << endl;
}

void checkError (string fruit, string day)
{
    if (!(fruit == "Banana" || fruit == "Apple" || fruit == "Orange" || fruit == "Grapefruit" || fruit == "Kiwi" || fruit == "Pineapple" || fruit == "Grapes"))
    {
        cout << "Error! Wrong input.";
    }
    if (!(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday" || day == "Sunday"))
    {
        cout << "Error! Wrong input.";
    }
}

float calculatePrice (string fruit, string day, float quantity)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "Banana")
        {
            price = 2.5 * quantity;
        }
        else if (fruit == "Apple")
        {
            price = 1.2 * quantity;
        }
        else if (fruit == "Orange")
        {
            price = 0.85 * quantity;
        }
        else if (fruit == "Grapefruit")
        {
            price = 1.45 * quantity;
        }
        else if (fruit == "Kiwi")
        {
            price = 2.7 * quantity;
        }
        else if (fruit == "Pineapple")
        {
            price = 5.5 * quantity;
        }
        else if (fruit == "Grapes")
        {
            price = 3.85 * quantity;
        }
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "Banana")
        {
            price = 2.7 * quantity;
        }
        else if (fruit == "Apple")
        {
            price = 1.25 * quantity;
        }
        else if (fruit == "Orange")
        {
            price = 0.9 * quantity;
        }
        else if (fruit == "Grapefruit")
        {
            price = 1.6 * quantity;
        }
        else if (fruit == "Kiwi")
        {
            price = 3.0 * quantity;
        }
        else if (fruit == "Pineapple")
        {
            price = 5.6 * quantity;
        }
        else if (fruit == "Grapes")
        {
            price = 4.2 * quantity;
        }
    }
    return price;
}