#include<iostream>

using namespace std;

main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0 ; i <= (size-1); i++)
    {
        cout << "Enter a number for array: ";
        cin >> arr[i];
    }
    for(int j = (size-1); j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
}