#include <iostream>
using namespace std;

void printPercentage (int number);

main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    printPercentage (number);
}

void printPercentage (int number)
{
    int integer;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (int c = 1; c <= number; c = c + 1)
    {
        cout << "Enter any integer: ";
        cin >> integer;

        if (integer <= 200)
        {
            p1 = p1 + 1;
        }
        else if (integer < 400)
        {
            p2 = p2 + 1;;
        }
        else if (integer < 600)
        {
            p3 = p3 + 1;
        }
        else if (integer < 800)
        {
            p4 = p4 + 1;
        }
        else if (integer >= 800)
        {
            p5 = p5 + 1;
        }
    }

    cout << "The percentage of numbers under 200 is: " << (p1 * 100) / number << "%" << endl;
    cout << "The percentage of numbers from 200 to 399 is: " << (p2 * 100) / number << "%" << endl;
    cout << "The percentage of numbers from 400 to 599 is: " << (p3 * 100) / number << "%" << endl;
    cout << "The percentage of numbers from 600 to 799 is: " << (p4 * 100) / number << "%" << endl;
    cout << "The percentage of numbers 800 upwards is: " << (p5 * 100) / number << "%" << endl;
}