#include <iostream>

using namespace std;

main()
{
    string arr [4];
    for (int idx = 0; idx <= 3; idx++)
    {
        cout << "Enter a string for the array: ";
        cin >> arr [idx];
    }
    string output = "True";
    for (int idx = 1; idx <= 3; idx++)
    {
        if (arr [idx - 1] != arr [idx])
        {
            output = "False";
            break;
        }
    }
    cout << output << endl;
}