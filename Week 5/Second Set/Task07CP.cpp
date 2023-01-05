#include <iostream>

using namespace std;

int main() 
{
	int poolVolume;
	int firstFlowRate;
	int secondFlowRate;
	float hours;
	int fullness;
	int percentage1;
	int percentage2;
	float totalFlowRate;
	float finalWaterVolume;
	float overflow;
	cout << "Enter the volume of the pool (V): ";
	cin >> poolVolume;
	cout << "Enter the flow rate of the first pipe (P1): ";
	cin >> firstFlowRate;
	cout << "Enter the flow rate of the second pipe (P2): ";
	cin >> secondFlowRate;
	cout << "Enter the number of hours the worker is gone (H): ";
	cin >> hours;
	totalFlowRate = firstFlowRate + secondFlowRate;
	finalWaterVolume = totalFlowRate * hours;
	percentage1 = (100 * firstFlowRate) / totalFlowRate;
	percentage2 = (100 * secondFlowRate) / totalFlowRate;
	if (finalWaterVolume > poolVolume)
	{
		overflow = finalWaterVolume - poolVolume;
		cout << "For " << hours << " hours the pool overflows with " << overflow << " liters." << endl;
	}
	if (finalWaterVolume <= poolVolume)
	{
		fullness = (100 * finalWaterVolume) / poolVolume;
		cout << "The pool is " << fullness << "% full. Pipe 1: " << percentage1 << "%. Pipe 2: " << percentage2 << "%." << endl;
	}
}
