#include <iostream>
#include <cmath>
using namespace std;
main()
{
	float num1;
	float num2;
	float greater;
	float power;
	float squareRoot;
	float cubeRoot;
	int ceilRound;
	int floorRound;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	greater = min (num1, num2);
	cout << greater << " is lesser." << endl;
	power = pow (num1, num2);
	cout << "Power: " << power << endl;
	squareRoot = sqrt (num1);
	cout << "Square root of " << num1 << " is " << squareRoot << endl;
	cubeRoot = cbrt (num1);
	cout << "Cube root of " << num1 << " is " << cubeRoot << endl;
	ceilRound = ceil (num1);
	cout << num1 << " is rounded off in ceil as: " << ceilRound << endl;
	floorRound = floor (num1);
	cout << num1 << " is rounded off in floor as: " << floorRound << endl;
}