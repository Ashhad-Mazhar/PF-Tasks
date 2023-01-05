#include <iostream>
using namespace std;
int myFunction (int num);
main()
{
	int num;
	int result;
	cout << "Enter a number: ";
	cin >> num;
	result = myFunction (num);
}
int myFunction (int num)
{
	
	int total;
	total = num * 5;
	return total;
}
