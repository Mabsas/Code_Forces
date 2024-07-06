#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s1, s2;

    cout << "Enter your strings : ";
    cin >> s1 >> s2;
    

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);     // transform all cases to upper or lower
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1.compare(s2) == 0)
    {
        cout << "0";
    }
    else if (s1.compare(s2) > 0)
    {
        cout << "1";
    }
    else
    {

        cout << "-1";
    }
}