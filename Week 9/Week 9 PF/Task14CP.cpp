#include<iostream>

using namespace std;

main()
{
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    int count=0;
    int vowels=0;
    while(name[count]!='\0')
    {
        if(name[count]=='a' || name[count]=='e'|| name[count]=='i'|| name[count]=='o'|| name[count]=='u')
        {
            vowels++;
            count++;
        }
        else
        {
            count++;
        }
    }
    cout << "Number of vowels is: " << vowels;

}