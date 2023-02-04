#include <iostream>

using namespace std;

main()
{
    int size, times;
    cout << "Enter size of array: ";
    cin >> size;
    int arr [size];
    for (int idx = 0; idx <= (size - 1); idx++)
    {
        cout << "Enter a number for the array: ";
        cin >> arr [idx];
    }
    cout << "Enter the number of times you want to perform the even-odd transformation: ";
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        for (int idx = 0; idx <= (size - 1); idx++)
        {
            if (arr [idx] % 2 == 0)
            {
                arr [idx] = arr [idx] - 2;
            }
            else
            {
                arr [idx] = arr [idx] + 2;
            }
        }
    }
    for (int idx = 0; idx <= (size - 1); idx++)
    {
        cout << arr [idx] << " ";
    }
}