#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int L, M;
    cin >> L >> M;
    int trees[L + 1];
    for (int i = 0; i < L + 1; i++) {
        trees[i] = 1;
    }
    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        for (int i = start; i < end + 1; i++) {
            trees[i] = 0;
        }
    }
    int result = 0;
    for (int i = 0; i < L + 1; i++) {
        result += trees[i];
    }
    cout << result << endl;
    return 0;
}
