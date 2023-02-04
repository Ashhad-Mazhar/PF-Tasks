#include <iostream>

using namespace std;

main()
{
    string fruit [4] = {"peach", "apple", "guava", "watermelon"};
    int price [4] = {60, 70, 40, 30};
    int quantity, totalBill, n;
    string input;
    cout << "Enter the name of fruit: ";
    cin >> input;
    cout << "Enter the quantity: ";
    cin >> quantity;
    for (int i = 0; i <= 4; i++)
    {
        if (fruit [i] == input)
        {
            n = i;
            break;
        }
    }
    totalBill = price [n] * quantity;
    cout << "Total bill is: " << totalBill << endl;
}