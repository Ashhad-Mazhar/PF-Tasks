#include <iostream>
using namespace std;
main ()
{
	string name;
	int matric, inter, ecat;
	float matricWeight, interWeight, ecatWeight, aggregate;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your matric marks: ";
	cin >> matric;
	cout << "Enter your inter marks: ";
	cin >> inter;
	cout << "Enter your ECAT marks: ";
	cin >> ecat;
	matricWeight = (100*matric/1100)*0.1;
	interWeight = (100*inter/550)*0.4;
	ecatWeight = (100*ecat/400)*0.5;
	aggregate = matricWeight+interWeight+ecatWeight;
	cout << "Your aggregate is: " << aggregate;
}