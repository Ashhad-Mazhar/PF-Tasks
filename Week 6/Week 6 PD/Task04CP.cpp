#include <iostream>

using namespace std;

bool checkService (char serviceCode);
float findDueAmount (char serviceCode);

main ()
{
    int minutes;
    char serviceCode;
    bool validity;
    float dueAmount;
    cout << "Enter which type of customer you are (Residential or Premium) Select (R/P): ";
    cin >> serviceCode;
    validity = checkService (serviceCode);
    if (validity == true)
    {
        dueAmount = findDueAmount (serviceCode);
        cout << "Your due amount is: $" << dueAmount << endl;
    }
    else
    {
        cout << "Error! Wrong input.";
    }
}

bool checkService (char serviceCode)
{
    bool validity;
    if (serviceCode == 'r' || serviceCode == 'R' || serviceCode == 'p' || serviceCode == 'P')
    {
        validity = true;
    }
    else
    {
        validity = false;
    }
    return validity;
}

float findDueAmount (char serviceCode)
{
    float dueAmount, dayAmount = 0, nightAmount = 0;
    int minutes, dayMinutes, nightMinutes;
    if (serviceCode == 'r' || serviceCode == 'R')
    {
        cout << "Enter number of minutes: ";
        cin >> minutes;
        if (minutes <= 50)
        {
            dueAmount = 10;
        }
        else
        {
            dueAmount = 10 + (0.2 * (minutes - 50));
        }
    }
    if (serviceCode == 'p' || serviceCode == 'P')
    {
        cout << "Enter number of minutes you used in the day: ";
        cin >> dayMinutes;
        cout << "Enter number of minutes you used in the night: ";
        cin >> nightMinutes;
        if (dayMinutes > 75)
        {
            dayAmount = 0.1 * (dayMinutes - 75);
        }
        if (nightMinutes > 100)
        {
            nightAmount = 0.05 * (nightMinutes - 100);
        }
        dueAmount = 25 + dayAmount + nightAmount;
    }
    return dueAmount;
}