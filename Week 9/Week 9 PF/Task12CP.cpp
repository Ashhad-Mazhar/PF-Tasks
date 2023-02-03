#include <iostream>

using namespace std;

main()
{

    string letter;

    cout << "Enter a letter: ";
    getline (cin, letter);

    for (int idx = 0; letter[idx] != '\0'; idx++)
    {
        if (letter[idx] >= 'a' && letter[idx] < 'z')
        {
            letter [idx] = letter [idx] + 1;
        }
        else if (letter[idx] == 'z')
        {
            letter [idx] = 'a';
        }
    }
    cout << letter << endl;
}