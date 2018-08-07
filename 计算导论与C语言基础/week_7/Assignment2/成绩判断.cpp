#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int score;
    cin >> score;
    if (score <= 100 && score >= 95) {
        cout << 1 << endl;
        return 0;
    }
    if (score < 95 && score >= 90) {
        cout << 2 << endl;
        return 0;
    }
    if (score < 90 && score >= 85) {
        cout << 3 << endl;
        return 0;
    }
    if (score < 85 && score >= 80) {
        cout << 4 << endl;
        return 0;
    }
    if (score < 80 && score >= 70) {
        cout << 5 << endl;
        return 0;
    }
    if (score < 70 && score >= 60) {
        cout << 6 << endl;
        return 0;
    }
    if (score < 60) {
        cout << 7 << endl;
        return 0;
    }
    return 0;
}
