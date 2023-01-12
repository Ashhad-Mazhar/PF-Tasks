#include <iostream>

using namespace std;

main ()
{
	char going, lecture;
    cout << "Do you have class today? (Press Y for yes): ";
    cin >> lecture;
    cout << "Are your friends going? (Press Y for yes): ";
    cin >> going;
    if (going == 'y')
    {
        if (lecture == 'y')
        {
            cout << "You're also going" << endl;
        }
    }
}