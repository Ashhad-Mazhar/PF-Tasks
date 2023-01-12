#include <iostream>
#include <cmath>
using namespace std;
float quadraticPlus (float a, float b, float c);
float quadraticMinus (float a, float b, float c);
main()
{
	float a;
	float b;
	float c;
	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	cout << "Enter value of c: ";
	cin >> c;
	float quadraticPositive;
	float quadraticNegative;
	quadraticPositive = quadraticPlus (a, b, c);
	quadraticNegative = quadraticMinus (a, b, c);
	cout << "x = " << quadraticPositive << " OR x = " << quadraticNegative;
}
float quadraticPlus (float a, float b, float c)
{
	float quadraticPositive;
	float discriminant;
	discriminant = (b*b)-(4*a*c);
	quadraticPositive = (-b + sqrt(discriminant))/(2*a);
	return quadraticPositive;
}
float quadraticMinus (float a, float b, float c)
{
	float quadraticNegative;
	float discriminant;
	discriminant = (b*b)-(4*a*c);
	quadraticNegative = (-b - sqrt(discriminant))/(2*a);
	return quadraticNegative;
}