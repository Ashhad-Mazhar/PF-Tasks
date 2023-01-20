#include <iostream>

using namespace std;

void printPercentage (float number);

main ()
{
    float number;
    cout << "Enter number of integers: ";
    cin >> number;
    printPercentage (number);
}

void printPercentage (float number)
{
    float p1 = 0, p2 = 0, p3 = 0;
    int integer;
    for (int i = 1; i <= number; i++)
    {
        cout << "Enter any integer: ";
        cin >> integer;
        if (integer % 2 == 0)
        {
            p1 = p1 + 1;
        }
        if (integer % 3 == 0)
        {
            p2 = p2 + 1;
        }
        if (integer % 4 == 0)
        {
            p3 = p3 + 1;
        }
    }
    cout << "Percentage of numbers divisible by 2 without remainder is: " << (p1/number) * 100 << "%" << endl;
    cout << "Percentage of numbers divisible by 3 without remainder is: " << (p2/number) * 100 << "%" << endl;
    cout << "Percentage of numbers divisible by 4 without remainder is: " << (p3/number) * 100 << "%" << endl;
}