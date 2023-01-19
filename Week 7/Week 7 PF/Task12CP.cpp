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
    int gcd, large, small, divisor, divisor1, remainder;
    if (number1 > number2)
    {
        large = number1;
        small = number2;
    }
    else
    {
        large = number2;
        small = number1;
    }
    divisor = large / small;
    remainder = large % small;
    while (remainder != 0)
    {
        divisor1 = divisor/remainder;
        remainder = divisor % remainder;
        divisor1 = divisor;
    }
    gcd = divisor;
    return gcd;
}

int calculateLCM (int number1, int number2, int gcd)
{
    int lcm;
    lcm = (number1 * number2)/gcd;
    return lcm;
}