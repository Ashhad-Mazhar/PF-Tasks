#include <iostream>
using namespace std;

string checkCase (char letter);

main()
{
	char letter;
	string output;
	cout << "Enter an alphabet: ";
	cin >> letter;
	output = checkCase (letter);
	cout << output << endl;
}

string checkCase (char letter)
{
	
	string output;
	if (letter == 'A')
	{
		output = "You have entered Capital A.";
	}
	if (letter == 'a')
	{
		output = "You have entered small A.";
	}
	return output;
}
