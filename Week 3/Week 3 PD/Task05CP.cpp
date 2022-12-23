#include <iostream>
using namespace std;
main ()
{
	int weight;
	int days;
	cout << "Enter weight that you want to lose: ";
	cin >> weight;
	days = weight*15;
	cout << "It will take you " << days;
	cout << " days to lose " << weight << " KGs";
}