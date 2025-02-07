#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    bool isValid = false;

    if (a + b == c) {
        isValid = true;
    }
    else if (a + c == b) {
        isValid = true;
    }

    else if (b + c == a) {
        isValid = true;
    }

    else if (a == b && a == c) {
        isValid = true;
    }

    if (isValid) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}