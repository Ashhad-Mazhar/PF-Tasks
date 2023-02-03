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
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (name[n-1]==letter)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False" << endl;
    }
}