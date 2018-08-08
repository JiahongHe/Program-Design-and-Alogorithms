#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 10; i < n + 1; i++) {
        int num2 = i / 10;
        int num1 = i % 10;
        int num = i / (num2 + num1);
        if (num * (num2 + num1) == i) {
            cout << i << endl;
        }
    }
    return 0;
}
