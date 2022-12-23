#include <iostream>
using namespace std;
main ()
{
	int length;
	int width;
	int area;
	cout << "Enter Length of Rectangle: ";
	cin >> length;
	cout << "Enter Width of Rectangle: ";
	cin >> width;
	area = length*width;
	cout << "Area of Rectangle is: " << area;
}