#include<iostream>


using namespace std;

main()
{
    int number;  
    cout<<"Enter number of resistors: ";
    cin >> number;
    int arr[number];
    int sum = 0;
    for(int i = 0 ; i < number; i++)
    {
        cout << "Enter the value of resistance: ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Total resistance is: " << sum << " Ohms" << endl;
}
