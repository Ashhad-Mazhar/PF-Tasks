#include <iostream>

using namespace std;

void time (int totalTime);

main()
{
	int inputHours;
	int inputMinutes;
	int totalTime;
	cout << "Enter hours: ";
	cin >> inputHours;
	cout << "Enter minutes: ";
	cin >> inputMinutes;
	totalTime = (inputHours * 60) + inputMinutes;
	time (totalTime);
}

void time (int totalTime)
{
	int minutes;
	int hours;
	int newTotalTime;
	newTotalTime = totalTime + 15;
	minutes = newTotalTime % 60;
	hours = newTotalTime/60;
	if (minutes >= 60)
	{
		minutes = minutes - 60;
		hours = hours + 1;
	}
	if (hours >= 24)
	{
		hours = hours - 24;
	}
	cout << hours << ":" << minutes << endl;
}