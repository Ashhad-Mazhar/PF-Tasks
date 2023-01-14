#include <iostream>

using namespace std;

string findZodiac (int date, string month);

main ()
{
    int date;
    string month, zodiac;
    cout << "Enter date of birth: ";
    cin >> date;
    cout << "Enter month of birth: ";
    cin >> month;
    zodiac = findZodiac (date, month);
    cout << "Your zodiac sign is: " << zodiac << endl;
}

string findZodiac (int date, string month)
{
    string zodiac;
    if ((month == "March" && date >= 21) || (month == "April" && date <= 19))
    {
        zodiac = "Aries";
    }
    else if ((month == "May" && date >= 21) || (month == "May" && date <= 20))
    {
        zodiac = "Taurus";
    }
    else if ((month == "April" && date >= 20) || (month == "June" && date <= 20))
    {
        zodiac = "Gemini";
    }
    else if ((month == "June" && date >= 21) || (month == "July" && date <= 22))
    {
        zodiac = "Cancer";
    }
    else if ((month == "July" && date >= 23) || (month == "August" && date <= 22))
    {
        zodiac = "Leo";
    }
    else if ((month == "August" && date >= 23) || (month == "September" && date <= 22))
    {
        zodiac = "Virgo";
    }
    else if ((month == "September" && date >= 23) || (month == "October" && date <= 22))
    {
        zodiac = "Libra";
    }
    else if ((month == "October" && date >= 23) || (month == "November" && date <= 21))
    {
        zodiac = "Scorpio";
    }
    else if ((month == "November" && date >= 22) || (month == "December" && date <= 21))
    {
        zodiac = "Sagittarius";
    }
    else if ((month == "December" && date >= 22) || (month == "January" && date <= 19))
    {
        zodiac = "Capricorn";
    }
    else if ((month == "January" && date >= 20) || (month == "February" && date <= 18))
    {
        zodiac = "Aquarius";
    }
    else if ((month == "February" && date >= 19) || (month == "March" && date <= 20))
    {
        zodiac = "Pisces";
    }
    return zodiac;
}