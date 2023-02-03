#include<iostream>

using namespace std;

main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0 ; i < size; i++)
    {
        cout << "Enter a number for array: ";
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int j = 0 ; j < size; j++)
    {
        if (arr[j] < smallest)
        {
            smallest = arr[j];
        }
    }

    cout << "Smallest number is: " << smallest;
}