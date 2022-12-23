#include <iostream>
using namespace std;
main ()
{
	int megabytes, bits;
	cout << "Enter Megabytes: ";
	cin >> megabytes;
	bits = megabytes*1024*1024*8;
	cout << "In Bits: " << bits;
}