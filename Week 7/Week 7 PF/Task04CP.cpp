#include <iostream>
using namespace std;
main ()
{
	int sum = 0, n1 = 0, n2 = 1;
	int repeat;
	cout << "Enter required no. of digits: ";
	cin >> repeat;
	cout << n1 << ", " << n2;
	for (int count = 2; count < repeat; count = count + 1)
	{
		sum = n1 + n2;
		cout << ", " << sum;
		n1 = n2;
		n2 = sum;	
	}
}