#include <iostream>

using namespace std;

main()
{
    float arr[4];
    float dueAmount;
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            cout << "Enter quarters in your pocket: ";
            cin >> arr[i];
        }
        else if (i == 1)
        {
            cout << "Enter dimes in your pocket: ";
            cin >> arr[i];
        }
        else if (i == 2)
        {
            cout << "Enter nickels in your pocket: ";
            cin >> arr[i];
        }

        else if (i == 3)
        {
            cout << "Enter pennies in your pocket: ";
            cin >> arr[i];
        }
    }

    cout << "Enter the amount you want to pay: ";
    cin >> dueAmount;

    float quarters = arr[0] * 0.25;
    float dimes = arr[1] * 0.10;
    float nickels = arr[2] * 0.05;
    float penny = arr[3] * 0.01;
    float sum = quarters + dimes + penny + nickels;

    if(sum >= dueAmount)
    {
        cout << "The amount is payable." << endl;
    }
    else
    {
        cout << "The amount is not payable." << endl;
    }

}