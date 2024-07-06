#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a;
    int count = 0;

    int sum = 0;
    int half_sum = 0;
    int new_sum = 0;

    vector<int> store;

    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        store.push_back(a);
    }

    sum = accumulate(store.begin(), store.end(), 0);

    half_sum = sum / 2;

    sort(store.rbegin(), store.rend());

    for (int i = 0; i < store.size(); i++)
    {

        if (new_sum > half_sum)
        {
            break;
        }
        new_sum += store[i];
        count++;
    }
    cout << count;
}