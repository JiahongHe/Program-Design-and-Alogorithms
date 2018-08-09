#include <iostream>
#include <vector>
using namespace std;

void infect(vector<vector<char>> &A, vector<vector<char>> &B, int i, int j, int n) {
    if (A[i][j] != '@') {
        return;
    }
    if (i > 0) {
        if (A[i - 1][j] == '.') {
            B[i - 1][j] = '@';
        }
    }
    if (i < n - 1) {
        if (A[i + 1][j] == '.') {
            B[i + 1][j] = '@';
        }
    }
    if (j > 0) {
        if (A[i][j - 1] == '.') {
            B[i][j - 1] = '@';
        }
    }
    if (j < n - 1) {
        if (A[i][j + 1] == '.') {
            B[i][j + 1] = '@';
        }
    }
}

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n;
    vector<vector<char>> matrix = vector<vector<char>>(n, vector<char>(n, '\0'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            matrix[i][j] = c;
        }
    }
    cin >> m;
    for (int _ = 0; _ < m - 1; _++) {
        vector<vector<char>> matrix_nextDay = matrix;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                infect(matrix, matrix_nextDay, i, j, n);
            }
        }
        matrix = matrix_nextDay;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == '@') {
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}
