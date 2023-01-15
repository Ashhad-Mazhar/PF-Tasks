#include <iostream>

using namespace std;

void lateOrEarly (int startingHours, int startingMinutes, int arrivalHours, int arrivalMinutes);

main ()
{
    int startingHours, startingMinutes, arrivalHours, arrivalMinutes;
    cout << "Enter exam starting time (Hours): ";
    cin >> startingHours;
    cout << "Enter exam starting time (Minutes): ";
    cin >> startingMinutes;
    cout << "Enter arrival time (Hours): ";
    cin >> arrivalHours;
    cout << "Enter arrival time (Minutes): ";
    cin >> arrivalMinutes;
    lateOrEarly (startingHours, startingMinutes, arrivalHours, arrivalMinutes);
}

void lateOrEarly (int startingHours, int startingMinutes, int arrivalHours, int arrivalMinutes)
{
    int totalStartingMinutes, totalArrivalMinutes, difference, outputHours, outputMinutes;
    totalStartingMinutes = (startingHours * 60) + startingMinutes;
    totalArrivalMinutes = (arrivalHours * 60) + arrivalMinutes;
    if ((totalArrivalMinutes - totalStartingMinutes) > 0)
    {
        cout << "Late" << endl;
    }
    else if ((totalStartingMinutes - totalArrivalMinutes) >= 0 && (totalStartingMinutes - totalArrivalMinutes) <= 30)
    {
        cout << "On time" << endl;
    }
    else if ((totalStartingMinutes - totalArrivalMinutes) > 30)
    {
        cout << "Early" << endl;
    }

    if (((totalStartingMinutes - totalArrivalMinutes) > 1) && ((totalStartingMinutes - totalArrivalMinutes) < 60))
    {
        difference = totalStartingMinutes - totalArrivalMinutes;
        cout << difference << " minutes before the start." << endl;
    }
    if ((totalStartingMinutes - totalArrivalMinutes) >= 60)
    {
        difference = totalStartingMinutes - totalArrivalMinutes;
        outputHours = difference/60;
        outputMinutes = difference % 60;
        if (outputMinutes < 10)
        {
            cout << outputHours << ":0" << outputMinutes << " hours before the start." << endl;
        }
        else if (outputMinutes >= 10)
        {
            cout << outputHours << ":" << outputMinutes << " hours before the start." << endl;
        }
    }
    if (((totalArrivalMinutes - totalStartingMinutes) > 1) && ((totalArrivalMinutes - totalStartingMinutes) < 60))
    {
        difference = totalArrivalMinutes - totalStartingMinutes;
        cout << difference << " minutes after the start." << endl;
    }
    if ((totalArrivalMinutes - totalStartingMinutes) >= 60)
    {
        difference = totalArrivalMinutes - totalStartingMinutes;
        outputHours = difference/60;
        outputMinutes = difference % 60;
        if (outputMinutes < 10)
        {
            cout << outputHours << ":0" << outputMinutes << " hours after the start." << endl;
        }
        else if (outputMinutes >= 10)
        {
            cout << outputHours << ":" << outputMinutes << " hours after the start." << endl;
        }
    }
}