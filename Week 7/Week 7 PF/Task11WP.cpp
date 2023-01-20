#include <iostream>

using namespace std;

void printCounting (int number);

main ()
{
	int number;
    cout << "Enter a number: ";
    cin >> number;
    printCounting (number);
}

void printCounting (int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << i << endl;
    }
}