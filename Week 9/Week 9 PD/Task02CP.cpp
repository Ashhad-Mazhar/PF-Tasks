#include <iostream>

using namespace std;

main()
{
    string movies [5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRaider"};
    string input;
    float price = 500;
    cout << "Enter the name of movie: ";
    cin >> input;
    for (int i = 0; i <= 4; i++)
    {
        if (movies [i] == input)
        {
            if (i % 2 == 0)
            {
                price = price * 0.90;
            }
            else
            {
                price = price * 0.95;
            }
            break;
        }
    }
    cout << "Your ticket price is: " << price << endl;
}