#include <iostream>

using namespace std;

string decideActivity (string temperature, string humidity);

main ()
{
    string temperature, humidity, activity;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter humidity: ";
    cin >> humidity;
    activity = decideActivity (temperature, humidity);
    cout << "Recommended activity: " << activity << endl;
}

string decideActivity (string temperature, string humidity)
{
    string activity;
    if (temperature == "Warm")
    {
        if (humidity == "Dry")
        {
            activity = "Play tennis";
        }
        else if (humidity == "Humid")
        {
            activity = "Swim";
        }
    }
    else if (temperature == "Cold")
    {
        if (humidity == "Dry")
        {
            activity = "Play basketball";
        }
        else if (humidity == "Humid")
        {
            activity = "Watch TV";
        }
    }
    return activity;
}