#include <bits/stdc++.h>
using namespace std;

// Function to solve Problem X: Max contiguous buildings of same height
int solveProblemX(const vector<int>& heights) {
    if (heights.empty()) return 0;

    int maxLen = 0;
    int currentLen = 0;
    int currentHeight = -1;

    for (int height : heights) {
        if (height != currentHeight) {
            currentLen = 0;
            currentHeight = height;
        }
        currentLen++;
        maxLen = max(maxLen, currentLen);
    }
    return maxLen;
}

// Function to solve Problem Y: Max buildings of same height with spacing K
int solveProblemY(const vector<int>& heights, int k) {
    int n = heights.size();
    int maxY = 0;

    for (int start = 0; start < k; ++start) {
        vector<int> groupHeights;
        for (int i = start; i < n; i += k) {
            groupHeights.push_back(heights[i]);
        }
        maxY = max(maxY, solveProblemX(groupHeights));
    }
    return maxY;
}

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int maxBuildings = 0;
    for (int k = 1; k <= n; ++k) {
        maxBuildings = max(maxBuildings, solveProblemY(heights, k));
    }

    cout << maxBuildings << endl;

    return 0;
}