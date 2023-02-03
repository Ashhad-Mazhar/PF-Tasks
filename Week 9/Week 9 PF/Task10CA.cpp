#include<iostream>

using namespace std;

main()
{
    string name;
    cout << "Enter name: ";
    getline(cin,name);
    int n = 0;
    while(name[n]!='\0')
    {
        n++;
    }
    for(int i=n; i!='\0';i--)
    {
        cout << name[i-1];
    }
}