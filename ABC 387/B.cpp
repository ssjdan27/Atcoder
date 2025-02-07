#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    int res = 0;
    vector<vector<int>> table;
    cin >> x;

    for (int i = 1; i <= 9; i++) {
        vector<int> row;
        for (int j = 1; j <= 9; j++) {
            row.push_back(j*i);
        }
        table.push_back(row);
    }

    for (const vector<int>& row: table) {
        for (int val : row) {
            if (val != x) {
                res += val;
            }
        }
    }

    cout << res;

    return 0;
}