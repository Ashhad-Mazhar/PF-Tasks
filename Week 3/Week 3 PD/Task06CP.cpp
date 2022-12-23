#include <iostream>
using namespace std;
main ()
{
	float bagSize;
	float bagCost;
	float bagArea;
	float costPerPound;
	float costOfArea;
	cout << "Enter Bag Size in Pounds: ";
	cin >> bagSize;
	cout << "Enter cost of the bag: ";
	cin >> bagCost;
	cout << "Enter area covered by each bag in square feet: ";
	cin >> bagArea;
	costPerPound = bagCost/bagSize;
	costOfArea = bagCost/bagArea;
	cout << "Cost of the fertilizer per pound: " << costPerPound << endl;
	cout << "Cost of fertilizing the area per square feet: " << costOfArea << endl;
}