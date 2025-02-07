#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string word;
    char c1, c2;
    cin >> n >> c1 >> c2;
    cin >> word;

    for (int i = 0; i < n; i++) {
        if (word[i] != c1) {
            word[i] = c2;
        }
    }

    cout << word;

    return 0;
}