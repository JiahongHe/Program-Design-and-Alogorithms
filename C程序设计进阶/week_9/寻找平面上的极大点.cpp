#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    int x[num];
    int y[num];
    for (int i = 0; i < num; i++) {
        int x_, y_;
        cin >> x_ >> y_;
        x[i] = x_;
        y[i] = y_;
    }
    for (int j = 0; j < num; j++) {
        for (int i = 0; i < num - j; i++) {
            if (x[i] > x[i + 1]) {
                int tmp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = tmp;
                tmp = y[i];
                y[i] = y[i + 1];
                y[i + 1] = tmp;
            }
        }
    }
    vector<int> out;
    out.push_back(num - 1);
    int max = y[num - 1];
    for (int i = num - 2; i > -1; i--) {
        if (y[i] > max) {
            out.push_back(i);
            max = y[i];
        }
    }
    for (int i = (int)out.size() - 1; i > -1; i--) {
        cout << '(' << x[out[i]] << ',' << y[out[i]] << ')';
        if (i > 0) {
            cout << ',';
        }
    }
    cout << endl;
    return 0;
}
