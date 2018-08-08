#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int m, n;
    cin >> m >> n;
    if (m > 4 || m < 0 || n > 4 || n < 0) {
        cout << "error" << endl;
        return 0;
    }
    int tmp[5] = {0};
    for (int i = 0; i < 5; i++) {
        tmp[i] = matrix[m][i];
    }
    for (int i = 0; i < 5; i++) {
        matrix[m][i] = matrix[n][i];
    }
    for (int i = 0; i < 5; i++) {
        matrix[n][i] = tmp[i];
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout  << "   " << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}
