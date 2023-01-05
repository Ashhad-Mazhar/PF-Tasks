#include <iostream>
using namespace std;
void challan (int speed);

main ()
{
	int speed;
	cout << "Enter Speed: ";
	cin >> speed;
	challan (speed);
}

void challan (int speed)
{
		if (speed <= 100)
		{
			cout << "Perfect! You're going good." << endl;
		}
		if (speed > 100)
		{
			cout << "Halt....YOU WILL BE CHALLENGED!!!" << endl;
		}
}