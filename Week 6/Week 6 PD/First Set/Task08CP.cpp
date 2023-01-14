#include <iostream>

using namespace std;

string checkPosition (int h, int XCoordinate, int YCoordinate);

main ()
{
    int h, XCoordinate, YCoordinate;
    string position;
    cout << "Enter integer h: ";
    cin >> h;
    cout << "Enter X coordinate: ";
    cin >> XCoordinate;
    cout << "Enter Y coordinate: ";
    cin >> YCoordinate;
    position = checkPosition (h, XCoordinate, YCoordinate);
    cout << position << endl;
}

string checkPosition (int h, int XCoordinate, int YCoordinate)
{
    string position;
    if ((XCoordinate > 0 && XCoordinate < (3 * h)) && (YCoordinate > 0 && YCoordinate < h))
    {
        position = "Inside";
    }
    else if ((XCoordinate > h && XCoordinate < (2 * h)) && (YCoordinate >= h && YCoordinate < (4 * h)))
    {
        position = "Inside";
    }
    else if ((YCoordinate == h && XCoordinate >= 0 && XCoordinate <= h))
    {
        position = "Border";
    }
    else if ((XCoordinate == 0 && YCoordinate >= 0 && YCoordinate <= h))
    {
        position = "Border";
    }
    else if ((YCoordinate == 0 && XCoordinate >= 0 && XCoordinate <= (3 * h)))
    {
        position = "Border";
    }
    else if ((XCoordinate == (3 * h) && YCoordinate >= 0 && YCoordinate <= h))
    {
        position = "Border";
    }
    else if ((YCoordinate == h && XCoordinate >= (2 * h) && XCoordinate <= (3 * h)))
    {
        position = "Border";
    }
    else if ((XCoordinate == (2 * h) && YCoordinate >= h && YCoordinate <= (4 * h)))
    {
        position = "Border";
    }
    else if ((YCoordinate == (4 * h) && XCoordinate >= h && XCoordinate <= (2 * h)))
    {
        position = "Border";
    }
    else if ((XCoordinate == h && YCoordinate >= h && YCoordinate <= (4 * h)))
    {
        position = "Border";
    }
    else
    {
        position = "Outside";
    }
    return position;
}