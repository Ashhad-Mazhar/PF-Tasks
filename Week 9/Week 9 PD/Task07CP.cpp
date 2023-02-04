#include <iostream>

using namespace std;

main()
{
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    int count1 = 0, count2 = 0, charCount = 0;
    while (s1[count1] != '\0')
    {
        count1++;
    }
    while (s2[count2] != '\0')
    {
        count2++;
    }
    for (int i = 0; i <= (count1 - 1); i++)
    {
        for (int j = 0; j <= (count2 - 1); j++)
        {
            if (s1[i] == s2[j])
            {
                charCount++;
                break;
            }
        }
    }
    cout << "These strings have " << charCount - 1 << " common characters." << endl;
}