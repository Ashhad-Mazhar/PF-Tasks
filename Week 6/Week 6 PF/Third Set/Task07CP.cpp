#include <iostream>

using namespace std;

void checkBudget (float budget, string category, int people);

main ()
{
	float budget;
    string category;
    int people;
    cout << "Enter budget in QR: ";
    cin >> budget;
    cout << "Enter category: ";
    cin >> category;
    cout << "Enter number of people: ";
    cin >> people;
    checkBudget (budget, category, people);
}

void checkBudget (float budget, string category, int people)
{
    float ticketBudget, comparison, ticketsCost;
    if (people >= 1 && people <= 4)
    {
        ticketBudget = budget * 0.25;
    }
    else if (people >= 5 && people <= 9)
    {
        ticketBudget = budget * 0.40;
    }
    else if (people >= 10 && people <= 24)
    {
        ticketBudget = budget * 0.50;
    }
    else if (people >= 25 && people <= 49)
    {
        ticketBudget = budget * 0.60;
    }
    else if (people >= 50)
    {
        ticketBudget = budget * 0.75;
    }
    if (category == "VIP")
    {
        ticketsCost = people * 499.99;
    }
    else if (category == "Normal")
    {
        ticketsCost = people * 249.99;
    }
    
    comparison = ticketBudget - ticketsCost;

    if (comparison >= 0)
    {
        cout << "Yes! You have " << comparison << " QR left." << endl;
    }
    else if (comparison < 0)
    {
        comparison = -1 * comparison;
        cout << "Not enough money! You need " << comparison << " QR." << endl;
    }
}