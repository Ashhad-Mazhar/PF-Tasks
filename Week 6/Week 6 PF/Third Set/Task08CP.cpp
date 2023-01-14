#include <iostream>

using namespace std;

int calculatePlayTime (string yearType, int holidays, int homeVisits);

main ()
{
    string yearType;
    int playTime, holidays, homeVisits;
    cout << "Enter the type of year: ";
    cin >> yearType;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of weekends Vladimir visits his hometown: ";
    cin >> homeVisits;
    playTime = calculatePlayTime (yearType, holidays, homeVisits);
    cout << "Number of times Vladimir plays is: " << playTime << endl;
}

int calculatePlayTime (string yearType, int holidays, int homeVisits)
{
    float playTime, holidayPlayTime, saturdayPlayTime, sundayPlayTime;
    holidayPlayTime = (holidays * 2)/3;
    saturdayPlayTime = ((48 - homeVisits) * 3)/4;
    sundayPlayTime = homeVisits;
    playTime = holidayPlayTime + saturdayPlayTime + sundayPlayTime;
    if (yearType == "Leap")
    {
        playTime = playTime * 1.15;
    }
    return playTime;
}