#include <iostream>
using namespace std;
main ()
{
	float pounds;
	int input;
	float kilograms;
	kilograms = 0.45;
	cout << "Enter Kilograms: ";
	cin >> input;
	pounds = input/kilograms;
	cout << "In pounds: " << pounds;
}