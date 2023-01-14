#include <iostream>

using namespace std;

bool greaterNumber (int num1, int num2, int num3);

main ()
{
	int num1, num2, num3;
    bool output;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    output = greaterNumber (num1, num2, num3);
    if (output == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

bool greaterNumber (int num1, int num2, int num3)
{
    bool output;
    if (num1 == num2 && num1 == num3 && num2 == num3)
    {
        output = true;
    }
    else
    {
        output = false;
    }
    return output;
}