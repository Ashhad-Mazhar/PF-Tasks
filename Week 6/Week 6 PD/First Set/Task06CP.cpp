#include <iostream>

using namespace std;

float findStudioPrice (string month, int stays);
float findApartmentPrice (string month, int stays);

main ()
{
    string month;
    int stays;
    float studioPrice, apartmentPrice;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> stays;
    studioPrice = findStudioPrice (month, stays);
    apartmentPrice = findApartmentPrice (month, stays);
    cout << "Apartment: " << apartmentPrice << "$" << endl;
    cout << "Studio: " << studioPrice << "$" << endl;
}

float findStudioPrice (string month, int stays)
{
    float studioPrice;
    if (month == "May" || month == "October")
    {
        if (stays > 7)
        {
            studioPrice = 50 * stays * 0.95;
        }
        if (stays > 14)
        {
            studioPrice = 50 * stays * 0.7;
        }
        else
        {
            studioPrice = 50 * stays;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (stays > 14)
        {
            studioPrice = 75.2 * stays * 0.80;
        }
        else
        {
            studioPrice = 75.2 * stays;
        }
    }
    else if (month == "July" || month == "August")
    {
        studioPrice = 76 * stays;
    }
    return studioPrice;
}

float findApartmentPrice (string month, int stays)
{
    float apartmentPrice;
    if (month == "May" || month == "October")
    {
        apartmentPrice = 65 * stays;
    }
    else if (month == "June" || month == "September")
    {
        apartmentPrice = 68.7 * stays;
    }
    else if (month == "July" || month == "August")
    {
        apartmentPrice = 77 * stays;
    }
    if (stays > 14)
    {
        apartmentPrice = apartmentPrice * 0.90;
    }
    return apartmentPrice;
}