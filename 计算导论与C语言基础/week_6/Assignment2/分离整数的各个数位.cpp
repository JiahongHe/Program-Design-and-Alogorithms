#include <iostream>
using namespace std;
int power(int a, int p) {
    int result = 1;
    for (int i = 0; i < p; i++) {
        result = result * a;
    }
    return result;
}
int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    for (int i = 2; i > -1; i--) {
        cout << num / (power(10, i)) << endl;
        num = num % (power(10, i));
    }
    return 0;
}
