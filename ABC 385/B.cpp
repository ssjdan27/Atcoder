#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, w, x, y;
    int houseCount = 0;
    vector<vector<char>> matrix;
    string movements;
    cin >> h >> w >> x >> y;

    for (int i = 0; i < h; i++) {
        string line;
        vector<char> row;
        cin >> line;
        for (char c: line) {
            row.push_back(c);
        }
        matrix.push_back(row);
    }

    cin >> movements;

    int xPos = x - 1;
    int yPos = y - 1;
    for (char c: movements) {
        if (c == 'U' && matrix[xPos - 1][yPos] != '#') {
            xPos--;
        }
        else if (c == 'D' && matrix[xPos + 1][yPos] != '#') {
            xPos++;
        }
        else if (c == 'L' && matrix[xPos][yPos - 1] != '#') {
            yPos--;
        }
        else if (c == 'R' && matrix[xPos][yPos + 1] != '#') {
            yPos++;
        }

        if (matrix[xPos][yPos] == '@') {
            matrix[xPos][yPos] = '$';
        }
    }

    for (const vector<char>& row: matrix) {
        for (const char &c : row) {
            if (c == '$') {
                houseCount++;
            }
        }
    }

    cout << ++xPos << " " << ++yPos << " " << houseCount;

    return 0;
}