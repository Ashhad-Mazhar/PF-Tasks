#include <iostream>
using namespace std;
void ifPass (int marks);

main()
{
	int marks;
	while (true)
	{
		cout << "Enter Marks: ";
		cin >> marks;
		ifPass (marks);
	}
}

void ifPass (int marks)
{
	if (marks>50)
		{
			cout << "You have passed the first quiz of PF." << endl;
		}
	if (marks==50)
		{
			cout << "Numbers are 50." << endl;
		}
	if (marks<50)
		{
			cout << "You have failed." << endl;
		}
}
