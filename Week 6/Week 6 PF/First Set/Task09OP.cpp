#include <iostream>

using namespace std;

int greatest (int num1, int num2);

main ()
{
	int num1, num2, greater;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    greater = greatest (num1, num2);
    cout << greater << " is the greater number." << endl;
}

int greatest (int num1, int num2)
{
    int greater;
    if (num1 > num2)
    {
        greater = num1;
    }
    else
    {
        greater = num2;
    }
    return greater;
}