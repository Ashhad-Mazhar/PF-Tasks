#include <iostream>

using namespace std;

void amplify (int lowerBound, int higherBound);

main ()
{
    int lowerBound = 1, higherBound;
    cout << "Enter higher bound: ";
    cin >> higherBound;
    amplify (lowerBound, higherBound);
}

void amplify (int lowerBound, int higherBound)
{
    cout << lowerBound;
    for (int i = 2; i <= higherBound; i++)
    {
        if (i % 4 == 0)
        {
            cout << ", " << i * 10;
        }
        else
        {
            cout << ", " << i;
        }
    }
}