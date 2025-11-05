#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    cin >> s;
    vector<int> a(26, 0);
    for(char c: s){
        a[int(c) - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(a[i] == 0){
            cout << char('a' + i) << "\n";
            return 0;
        }
    }
    return 0;
}