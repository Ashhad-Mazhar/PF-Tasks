#include <iostream>
using namespace std;
void A ();
void S ();
void H ();
void D ();

main ()
{
	A ();
	S ();
	H ();
	H ();
	A ();
	D ();
}

void A ()
{
		cout << "A" << endl;
}

void S ()
{
		cout << "S" << endl;
}

void H ()
{
		cout << "H" << endl;
}

void D ()
{
		cout << "D" << endl;
}