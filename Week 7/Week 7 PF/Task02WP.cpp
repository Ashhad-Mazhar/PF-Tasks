#include <iostream>

using namespace std;

int calculateSum ();

main ()
{
    int sum;
    sum = calculateSum();
    cout << "Sum is: " << sum << endl;
}

int calculateSum ()
{
    int sum = 0;
	for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    return sum;
}