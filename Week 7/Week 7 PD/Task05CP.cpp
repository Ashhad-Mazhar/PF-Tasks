#include <iostream>

using namespace std;

int triangle (int sequenceNumber);

main ()
{
    int sequenceNumber, dots;
    cout << "Enter sequence number: ";
    cin >> sequenceNumber;
    dots = triangle (sequenceNumber);
    cout << "The number of dots is: " << dots << endl;
}

int triangle (int sequenceNumber)
{
    int dots = 0;
    for (int i = 1; i <= sequenceNumber; i++)
    {
        dots = dots + i;
    }
    return dots;
}