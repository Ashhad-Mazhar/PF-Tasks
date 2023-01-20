#include <iostream>

using namespace std;

void printOutput (int rows);

main ()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printOutput (rows);
}

void printOutput (int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

}