#include <iostream>

using namespace std;

int digitSum (int number);

main ()
{
	int sum, number = 100;
    sum = digitSum (number);
    cout << "Sum is: " << sum << endl;
}

int digitSum (int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    return sum;
}