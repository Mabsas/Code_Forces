#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2;
    long long int n;
    cin >> n;

    s1 = "I hate";
    s2 = "I love";

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            cout << s2 << " ";
            if (i != n)
            {
                cout << "that" << " ";
            }
            else
            {
                cout << "it" << " ";
            }
        }
        else
        {
            cout << s1 << " ";
            if (i != n)
            {
                cout << "that" << " ";
            }
            else
            {
                cout << "it" << " ";
            }
        }
    }
}