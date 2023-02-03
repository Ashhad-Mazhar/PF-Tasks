#include <iostream>

using namespace std;

main()
{
    string name;
    cout << "Enter name: " << endl;
    cin >> name;
    char letter = name[0];
    int n = 0;
    while (letter != '\0')
    {
        letter = name[n];
        cout << "The letter " << letter << " is at index " << n << "." << endl;
        n++;
    }
}