#include <iostream>

using namespace std;

string congrats (int rollNumber, string name);

main ()
{
	int rollNumber;
    string name, output;
    cout << "Enter name of the student: ";
    cin >> name;
    cout << "Enter roll number of the student: ";
    cin >> rollNumber;
    output = congrats (rollNumber, name);
    cout << output << endl;
}

string congrats (int rollNumber, string name)
{
    string output;
    if (name == "Ali" && rollNumber == 501)
    {
        output = "Congrats, Ali! You have got admission to UET.";
    }
    else
    {
        output = "Wrong student.";
    }
    return output;
}