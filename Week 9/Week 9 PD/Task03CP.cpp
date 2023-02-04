#include <iostream>

using namespace std;

main()
{
    string input;
    int count = 0, n = 0;
    cout << "Enter a string: ";
    cin >> input;
    while (input[n] != '\0')
    {
        count ++;
        n++;
    }
    if (count % 2 == 0)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}