#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> loopNumbers;
    vector<int> data;

    //keeping track  Data + loop number
   
    for (int i = 0; i < n; i++) {
        int inputData;
        cin >> inputData;
        data.push_back(inputData);
        loopNumbers.push_back(i + 1); 
    }

    // Merging loop numbers and data into a vector of pairs
    vector<pair<int, int>> present;
    for (int i = 0; i < n; i++) {
        present.push_back(make_pair(loopNumbers[i], data[i]));
    }

    // Sorting using lambda function comparing with the second element
    sort(present.begin(), present.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });


    for (const auto& p : present) {
        cout << p.first << " ";
    }


}
