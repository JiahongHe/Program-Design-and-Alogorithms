#include <iostream>
using namespace std;

int step(int n) {
    if (n == 1) {
        return n;
    }
    if (n % 2 == 0) {
        cout << n << "/2=" << n/2 << endl;
        return step(n / 2);
    }
    if (n % 2 == 1) {
        cout << n << "*3+1=" << 3 * n + 1 << endl;
        return step(3 * n + 1);
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    step(num);
    cout << "End" << endl;
    return 0;
}
