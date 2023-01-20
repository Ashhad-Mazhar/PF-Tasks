#include <iostream>

using namespace std;

int calculateGCD (int number1, int number2);
int calculateLCM (int number1, int number2, int gcd);

main ()
{
	int number1, number2, lcm, gcd, number;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    gcd = calculateGCD (number1, number2);
    lcm = calculateLCM (number1, number2, gcd);
    cout << "GCD is: " << gcd << endl;
    cout << "LCM is: " << lcm << endl;
}

int calculateGCD (int number1, int number2)
{
    int gcd = 1;
    int x = 1;
    while (x != number1 && x != number2)
    {
        if (number1 % x == 0 && number2 % x ==0)
        {
            gcd = x;
        }
        x = x + 1;
    }
    return gcd;
}

int calculateLCM (int number1, int number2, int gcd)
{
    int lcm;
    lcm = (number1 * number2)/gcd;
    return lcm;
}