#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin >> n)) return 0;
    vector<int> a(n);
    for (int &b : a) cin >> b;

    unordered_map<int, long long> cnt;
    cnt.reserve(n*2);
    for (int v : a) cnt[v]++;

    long long res = 0;
    for (auto &p : cnt) {
        long long c = p.second;
        if (c >= 2) {
            res += (c * (c - 1) / 2) * (n - c);
        }
    }

    cout << res << "\n";
    return 0;
}