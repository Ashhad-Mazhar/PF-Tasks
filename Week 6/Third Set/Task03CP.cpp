#include <iostream>

using namespace std;

string checkSpeed (float speed);

main ()
{
	float speed;
    string status;
    cout << "Enter speed: ";
    cin >> speed;
    status = checkSpeed (speed);
    cout << status << endl;
}

string checkSpeed (float speed)
{
    string status;
    if (speed > 0 && speed <= 10)
    {
        status = "Slow";
    }
    if (speed > 10 && speed <= 50)
    {
        status = "Average";
    }
    if (speed > 50 && speed <= 150)
    {
        status = "Fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        status = "Ultra-fast";
    }
    if (speed > 1000)
    {
        status = "Extremely fast";
    }
    return status;
}