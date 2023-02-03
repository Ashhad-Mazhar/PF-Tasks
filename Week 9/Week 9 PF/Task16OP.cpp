#include<iostream>

using namespace std;

main()
{
    int size, number;
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
    bool flag = false;
    for (int j = 0; j <= (size-1); j++)
    {
        if (arr[j] == number)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Already entered" << endl;
    }
}