#include <iostream>

using namespace std;

main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    string output = "";
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        if ((word[idx] != 'a' && word[idx] != 'e' && word[idx] != 'i' && word[idx] != 'o' && word[idx] != 'u'))
        {
            output = output + word[idx];
        }
    }
    cout << output << endl;
}