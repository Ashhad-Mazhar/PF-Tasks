#include <iostream>
using namespace std;
main ()
{
	float vi;
	float acc;
	float time;
	float vf;
	cout << "Enter Initial Velocity: ";
	cin >> vi;
	cout << "Enter Acceleration: ";
	cin >> acc;
	cout << "Enter Time: ";
	cin >> time;
	vf = vi+acc*time;
	cout << "Final Velocity: " << vf;
}