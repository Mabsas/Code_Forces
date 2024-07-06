#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(4);
    for (int i = 0; i < s.size(); i++) {
        cin >> s[i];
    }

    int count = 0;
    sort(s.begin(),s.end());

    for (int i = 0; i < s.size(); i++) {

            if(s[i]==s[i+1]){
                count++;
            }
    }

    cout << count;
    return 0;
}
