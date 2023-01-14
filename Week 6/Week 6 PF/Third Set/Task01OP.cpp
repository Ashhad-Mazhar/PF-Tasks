#include <iostream>

using namespace std;

string checkTitle (char gender, int age);

main ()
{
	float age;
    char gender;
    string title;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender: ";
    cin >> gender;
    title = checkTitle (gender, age);
    cout << "Your personal title is: " << title << endl;
}

string checkTitle (char gender, int age)
{
    string title;
    if (gender == 'm' && age >= 16)
    {
        title = "Mr.";
    }
    else if (gender == 'm' && age < 16)
    {
        title = "Master";
    }
    else if (gender == 'f' && age >= 16)
    {
        title = "Ms.";
    }
    else if (gender == 'f' && age < 16)
    {
        title = "Miss";
    }
    return title;
}