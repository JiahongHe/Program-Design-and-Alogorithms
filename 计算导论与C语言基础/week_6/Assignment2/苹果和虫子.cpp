#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int total;
    int hour_per_apple;
    int time;
    cin >> total >> hour_per_apple >> time;
    int count = (int)time / hour_per_apple;
    if (count * hour_per_apple < time) {
        count += 1;
    }
    int left = total - count;
    if (left < 0) {
        left = 0;
    }
    cout << left << endl;
    return 0;
}
