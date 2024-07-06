#include <bits/stdc++.h>
#define long long int
using namespace std;

int main()
{

    int k, n, w;
    int total = 0;
    int remaining = 0;
    int prod = 0; // initial price k ,, total dollar n,,, number of banana w
    cout << "Enter amounts : ";
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {

        prod = i * k;
        total = total + prod;
    }
    remaining = n - total;
    if (remaining < 0)
    {
        cout << "Need to borrow " << abs(remaining);
    }
    else
    {
        cout << "Need to borrow : 0";
    }
}