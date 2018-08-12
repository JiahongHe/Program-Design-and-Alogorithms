#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, k;
    cin >> m >> k;
    string str_m = to_string(m);
    int count = 0;
    bool flag1 = false;
    bool flag2 = false;
    for (int i = 0; i < str_m.size(); i++) {
        if (str_m[i] == '3') {
            count++;
        }
    }
    if (count == k) {
        flag1 = true;
    }
    if (m % 19 == 0) {
        flag2 = true;
    }
    if (flag1 && flag2) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
