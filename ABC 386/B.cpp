#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int doubleZero = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            if(i + 1 < s.length() && s[i + 1] == '0'){
                doubleZero++;
                i++;
            }   
        }
    }

    cout << s.length() - doubleZero;


    return 0;
}