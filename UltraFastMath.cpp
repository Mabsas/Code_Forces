#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int len = a.length();
    vector<int> r;

    for (int i = 0; i < len; i++) {
        if (a[i] == b[i]) {
            r.push_back(0);
        } else {
            r.push_back(1);
        }
    }

    for (int val : r) {
        cout << val;
    }
    cout << endl; // 

    return 0;
}
