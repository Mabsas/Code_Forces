#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;

pair<int, string> findLCSofThree(string X, string Y, string Z) {
    int m = X.size();
    int n = Y.size();
    int o = Z.size();

    vector<vector<vector<int>>> L(m + 1, vector<vector<int>>(n + 1, vector<int>(o + 1, 0)));

    // Build the L[m+1][n+1][o+1] table in bottom-up fashion
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= o; k++) {
                if (X[i - 1] == Y[j - 1] && X[i - 1] == Z[k - 1]) {
                    L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;
                } else {
                    L[i][j][k] = max({L[i - 1][j][k], L[i][j - 1][k], L[i][j][k - 1]});
                }
            }
        }
    }

    // The length of the LCS of the three strings
    int lcs_length = L[m][n][o];

    // Reconstruct the LCS from the L table
    string lcs;
    int i = m, j = n, k = o;
    while (i > 0 && j > 0 && k > 0) {
        if (X[i - 1] == Y[j - 1] && X[i - 1] == Z[k - 1]) {
            lcs.push_back(X[i - 1]);
            i--;
            j--;
            k--;
        } else if (L[i - 1][j][k] >= L[i][j - 1][k] && L[i - 1][j][k] >= L[i][j][k - 1]) {
            i--;
        } else if (L[i][j - 1][k] >= L[i - 1][j][k] && L[i][j - 1][k] >= L[i][j][k - 1]) {
            j--;
        } else {
            k--;
        }
    }

    reverse(lcs.begin(), lcs.end()); // Reverse the LCS since we built it backwards

    return {L[m][n][o], lcs};
}

int main() {
    string X = "AGGT12";
    string Y = "12TXAYB";
    string Z = "12XBA";

    auto result = findLCSofThree(X, Y, Z);
    int lcs_length = result.first;
    string lcs = result.second;

    cout << "The length of the LCS of the three strings is: " << lcs_length << endl;
    cout << "The LCS of the three strings is: " << lcs << endl;

    return 0;
}
