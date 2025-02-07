#include <bits/stdc++.h>
using namespace std;

int divideStuff(int val) {

    if ((val & (val - 1)) == 0){
        return 1;
    }

    while (val % 2 == 0) {
        val /= 2;
    }
    return val;
}

int main() {
    int n;
    int score = 0;
    vector<int> nums;
    vector<int> indiv;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int value = nums[i] + nums[j];
            int result = divideStuff((value));
            score += result;
        }
    }

    cout << score;
    return 0;
}