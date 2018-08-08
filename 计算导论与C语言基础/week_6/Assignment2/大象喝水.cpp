#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h;
    int r;
    cin >> h >> r;
    const double pi = 3.1415926;
    int needed = 20 * 1000; // 20L of water is 20 * 1000 cm^3 of water;
    double volume = pi * r * r * h;
    int num = needed / volume;
    if (num * volume < needed) {
        num += 1;
    }
    cout << num << endl;
    return 0;
}
