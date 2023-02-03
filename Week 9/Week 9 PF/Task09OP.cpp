#include<iostream>

using namespace std;

main()
{

    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    int n = 0;
    while(name[n]!='\0')
    {
        n++;
    }

    if(n % 2 == 0)
    {
        cout << "Length is even" << endl;
    }
    else
    {
        cout << "Length IS odd" << endl;
    }
}