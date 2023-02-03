#include<iostream>

using namespace std;

main()
{
    int size, product, number;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0 ; i <= (size-1); i++)
    {
        cout << "Enter a number for array: ";
        cin >> arr[i];
    }
    cout << "Enter a number: ";
    cin >> number;
    for(int j = 0 ; j <= (size-1); j++)
    {
        product = arr[j]*number;
        cout << "Scalar product is: " << product << endl;
    }
}