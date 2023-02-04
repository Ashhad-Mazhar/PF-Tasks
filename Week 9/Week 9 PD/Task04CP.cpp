#include <iostream>

using namespace std;

main()
{
    int size, digit;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr [size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter a number for the array: ";
        cin >> arr [idx];
    }
    string output = "There is no 7 in the array.";
    for (int idx = 0; idx < size; idx++)
    {
        if (arr [idx] == 7)
        {
            output = "Boom!";
            break;
        }
        else
        {
            int number = arr[idx];
            while (number > 0)
            {
                digit = number % 10;
                if (digit == 7)
                {
                    output = "Boom!";
                    break;
                }
                number = number/10;
            }
        }
    }
    cout << output << endl;
}