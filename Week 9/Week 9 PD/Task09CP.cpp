#include <iostream>
#include <string>

using namespace std;

main()
{
    int PIN [4];
    string input;
    bool validity = true;
    string MOVES [10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for (int idx = 0; idx <= 3; idx++)
    {
        cout << "Enter digit " << idx + 1 << " of the PIN: ";
        cin >> input;
        if (input != "0" && input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6" && input != "7" && input != "8" && input != "9")
        {
            validity = false;
            break;
        }
        PIN [idx] = stoi(input);
    }
    if (validity == true)
    {
        string output [4];
        int n = 0;
        for (int idx = 0; idx <= 3; idx++)
        {
            if ((PIN[idx] + n) <= 9)
            {
                cout << MOVES [PIN[idx] + n] << " ";
                n++;
            }
            else if ((PIN[idx] + n) > 9) 
            {
                cout << MOVES [((PIN[idx] + n) % 9) - 1] << " ";
                n++;
            }
        }
    }
    else if (validity == false)
    {
        cout << endl << "Invalid input" << endl;
    }
}