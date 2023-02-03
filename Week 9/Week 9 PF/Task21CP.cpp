#include<iostream>

using namespace std;

main()
{
    int arr1[2];
    for (int idx = 0; idx < 2; idx++)
    {
        cout << "Enter a number for first array: ";
        cin >> arr1 [idx];
    }
    int size;
    cout << "Enter size of second array: ";
    cin >> size;
    int arr2[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter a number: ";
        cin >> arr2 [idx];
    }
    int arr3 [size+2];
    arr3 [0] = arr1 [0];
    arr3 [size+1] = arr1 [1];
    int j = 0;
    for (int idx = 1; idx <= size; idx++)
    {
        arr3[idx] = arr2[j];
        j++;
    }
    for (int idx = 0; idx <= (size+1); idx++)
    {
        cout << arr3[idx] << " ";
    }
}

