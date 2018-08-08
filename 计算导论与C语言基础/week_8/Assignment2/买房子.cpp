#include <iostream>
using namespace std;

int year_can_buy(int N, int k) {
    double price = 200;
    for (int i = 1; i < 21; i++) {
        if (N * i >= price) {
            return i;
        }
        price = (price * (1.0 + k / 100.0));
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int N[3];
    int k[3];
    for (int i = 0; i < 3; i++) {
        cin >> N[i] >> k[i];
    }
    for (int i = 0; i < 3; i++) {
        int year = year_can_buy(N[i], k[i]);
        if (year == -1) {
            cout << "Impossible" << endl;
            continue;
        }
        cout << year << endl;
    }
    return 0;
}
