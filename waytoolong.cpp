#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;

    string wd;
    cout << "Enter words: "<< "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> wd;

        if (wd.length() <= 10)
        {

            cout << wd<<"\n";
        }
        else
        {
            cout << wd[0] << wd.length() - 2 << wd[wd.length() - 1]<<"\n";
        }
    }
}
