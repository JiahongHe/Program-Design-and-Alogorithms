#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n;
    cin >> m >> n;
    
    if (m > n) {
        cout << "invalid input" << endl;
        return 0;
    }
    int result = 0;
    for (int i = m; i < n + 1; i++) {
        // if i is odd, then we add it to the result sum.
        if (i % 2 == 1) {
            result += i;
        }
    }
    cout << result << endl;
    return 0;
}
