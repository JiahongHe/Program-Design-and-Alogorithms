#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    int ind = 0;
    int m1, m2, m3;
    m1 = num / 3;
    m2 = num / 5;
    m3 = num / 7;
    if (m1 * 3 == num) {
        cout << "3 ";
        ind ++;
    }
    if (m2 * 5 == num) {
        cout << "5 ";
        ind ++;
    }
    if (m3 * 7 == num) {
        cout << "7";
        ind ++;
    }
    if (ind == 0) {
        cout << 'n';
    }
    cout << endl;
    return 0;
}
