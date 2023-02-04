#include <iostream>

using namespace std;

main()
{
    int size, time = 2;
    cout << "Enter the size of the array: ";
    cin >> size;
    string arr[size];
    for (int idx = 0; idx <= (size - 1); idx++)
    {
        cout << "Enter the color of pencil: ";
        cin >> arr [idx];
    }
    for (int idx = 1; idx <= (size - 1); idx++)
    {
        time = time + 2;
        if (arr [idx] != arr [idx - 1])
        {
            time++;
        }
    }
    cout << "Total time required is: " << time << " seconds" << endl;
}