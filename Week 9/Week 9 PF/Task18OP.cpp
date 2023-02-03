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
    int largest = arr[0];
    for(int j = 0 ; j < size; j++)
    {
        if (arr[j] > largest)
        {
            largest = arr[j];
        }
    }

    cout << "Largest number is: " << largest;
}