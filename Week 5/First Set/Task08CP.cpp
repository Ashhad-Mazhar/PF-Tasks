#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight (float base, float angleDegree);
main()
{
	float base;
	float angleDegree;
	float height;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter angle in degrees: ";
	cin >> angleDegree;
	height = calculateHeight (base, angleDegree);
	cout << "Height is: " << height << endl;
}
float calculateHeight (float base, float angleDegree)
{
	float angleRadian;
	float height;
	angleRadian = angleDegree/57.2958;
	height = base * tan (angleRadian);
	return height;
}