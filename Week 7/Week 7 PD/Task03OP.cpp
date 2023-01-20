#include <iostream>

using namespace std;

void nestedForUpper (int rows);
void nestedForLower (int rows);

main ()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    nestedForUpper (rows);
    nestedForLower (rows);
}

void nestedForUpper (int rows)
{
    int upperRows = rows/2, count1 = upperRows, count2 = upperRows;
    for (int i = 1; i <= upperRows; i++)
    {
        for (int j = count1; j > 1; j--)
        {
            cout << " ";
        }
        count1--;
        for (int k = 0; k <= count2 - upperRows; k++)
        {
            cout << "*";
        }
        count2++;
        cout << endl;
    }
}

void nestedForLower (int rows)
{
    int lowerRows = rows/2, count1 = lowerRows, count2 = lowerRows;
    for (int i = 1; i <= lowerRows; i++)
    {
        for (int j = 1; j <= count1 - lowerRows; j++)
        {
            cout << " ";
        }
        count1++;
        for (int k = count2; k >= 1; k--)
        {
            cout << "*";
        }
        count2--;
        cout << endl;
    }
}