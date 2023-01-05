#include <iostream>
using namespace std;
void playTime (int holidays);
main ()
{
	int holidays;
	cout << "Enter number of holidays: ";
	cin >> holidays;
	playTime (holidays);
}

void playTime (int holidays)
{
	int workingDays = 365-holidays;
	int timeForGames = workingDays * 63 + holidays * 127;
	int difference = 30000 - timeForGames;
	if(timeForGames <= 30000)
	{
		cout << "Tom sleeps well" << endl;
		cout << difference << " minutes less for play." << endl;
	}
	if(timeForGames > 30000)
	{
		cout<<"Tom will run away"<<endl;
		cout << -1*difference << " minutes for play " << endl;
	}

}