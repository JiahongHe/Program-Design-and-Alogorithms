#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int mont[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int h;
            cin >> h;
            mont[i][j] = h;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            bool flag = true;
            if (i > 0) {
                if (mont[i - 1][j] > mont[i][j]) {
                    flag = false;
                }
            }
            if (j > 0) {
                if (mont[i][j - 1] > mont[i][j]) {
                    flag = false;
                }
            }
            if (i < m - 1) {
                if (mont[i + 1][j] > mont[i][j]) {
                    flag = false;
                }
            }
            if (j < n - 1) {
                if (mont[i][j + 1] > mont[i][j]) {
                    flag = false;
                }
            }
            if (flag) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}