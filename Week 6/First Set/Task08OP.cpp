#include <iostream>

using namespace std;

string evenOdd (int number);

main ()
{
	int number;
    string output;
    cout << "Enter a number: ";
    cin >> number;
    output = evenOdd (number);
    cout << output << endl;
}

string evenOdd (int number)
{
    string output;
    if (number % 2 == 0)
    {
        output = "Even";
    }
    else
    {
        output = "Odd";
    }
    return output;
}