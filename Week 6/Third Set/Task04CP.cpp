#include <iostream>

using namespace std;

float totalIncome (string type, int rows, int columns);

main ()
{
	string type;
    int rows, columns;
    float income;
    cout << "Enter screening type: ";
    cin >> type;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    income = totalIncome (type, rows, columns);
    cout << "Total income is: " << income << endl;
}

float totalIncome (string type, int rows, int columns)
{
    float income, price;
    if (type == "Premiere")
    {
        price = 12;
    }
    else if (type == "Normal")
    {
        price = 7.5;
    }
    else if (type == "Discount")
    {
        price = 5;
    }
    income = price * rows * columns;
    return income;
}