#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int highest = 0;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if (score > highest) {
            highest = score;
        }
    }
    cout << highest << endl;
    return 0;
}
