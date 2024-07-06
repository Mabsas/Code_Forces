#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{

    string s;
    cout << "Enter problem : ";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {

        for (int j = i+1; s[j] != '\0'; j++)
        {

            if ((isdigit(s[i]) && isdigit(s[j])) && s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    cout << s;
}