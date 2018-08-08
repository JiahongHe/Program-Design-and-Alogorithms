#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    int cells[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> cells[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            bool con1 = cells[i][j] - cells[i - 1][j] <= -50;
            bool con2 = cells[i][j] - cells[i][j - 1] <= -50;
            bool con3 = cells[i][j] - cells[i][j + 1] <= -50;
            bool con4 = cells[i][j] - cells[i + 1][j] <= -50;
            if (con1 && con2 && con3 && con4) {
                count ++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
