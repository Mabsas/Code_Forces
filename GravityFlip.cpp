#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, cube;
    cin >> n;
    vector<int> a; 


    for (int i = 0; i < n; i++)
    {
        cin >> cube;
        a.push_back(cube);
    }

    for (int i = 0; i < a.size(); i++)
    {

        for (int j = i + 1; j < a.size(); j++)
        {

            if (a[i] > a[j])
            {

                swap(a[i], a[j]);
            }
        }
    }

    for (int val : a)
    {
        cout << val << " ";
    }

    return 0;
}
