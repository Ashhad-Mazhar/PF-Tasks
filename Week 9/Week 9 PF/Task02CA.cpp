#include <iostream>

using namespace std;

main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    for (int i = 1; i <= 4; i=i+2)
    {
        cout << arr[i] << " ";
    }
}