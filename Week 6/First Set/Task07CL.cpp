#include <iostream>

using namespace std;

main ()
{
	int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 50)
    {
        cout << "You have passed." << endl;
    }
    else
    {
        cout << "You have failed." << endl;
    }
}