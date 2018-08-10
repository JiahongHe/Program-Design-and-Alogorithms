#include <iostream>
using namespace std;

int step(int A[], int i, int b) {
    if (A[i] != b) {
        return i;
    }
    else {
        int n = step(A, i + 1, b);
        cout << i << " " << n << endl;
        return step(A, n + 1, b);
    }
}

int main(int argc, const char * argv[]) {
    string s;
    getline(cin, s);
    int A[s.size()];
    char boy = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == boy) {
            A[i] = 1;
        }
        else {
            A[i] = 0;
        }
    }
    step(A, 0, 1);
    return 0;
}