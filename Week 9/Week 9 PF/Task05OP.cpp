#include <iostream>

using namespace std;

main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= (n-1); i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    for (int i = 0; i <= (n-1); i++)
    {
        cout << arr[i] << " ";
    }
}