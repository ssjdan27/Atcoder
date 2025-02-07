#include <bits/stdc++.h>
using namespace std;

bool Comparison(const pair<int, string> &a, const pair<int, string> &b) {
    if (a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

void generateSubsets(string str, int index, const string& current, vector<string>& subsets) {
    if (index == str.length()) {
        subsets.push_back(current);
        return;
    }

    // include
    generateSubsets(str, index + 1, current + str[index], subsets);
    // exclude
    generateSubsets(str, index + 1, current, subsets);
}

int main() {
    int a, b, c, d, e;
    vector<string> results;
    vector<pair<int, string>> scoresAndString;
    cin >> a >> b >> c >> d >> e;

    generateSubsets("ABCDE", 0, "", results);

    for (const string& x : results) {
        int score = 0;
        for (const char z : x) {
            if (z == 'A') {
                score += a;
            }
            else if (z == 'B') {
                score += b;
            }
            else if (z == 'C') {
                score += c;
            }
            else if (z == 'D') {
                score += d;
            }
            else {
                score += e;
            }
        }

        pair<int, string> pair(score, x);
        scoresAndString.push_back(pair);
    }

    sort(scoresAndString.begin(), scoresAndString.end(), Comparison);

    for (pair<int, string> x : scoresAndString) {
        if (!x.second.empty()) {
            cout << x.second << "\n";
        }
    }

    return 0;
}