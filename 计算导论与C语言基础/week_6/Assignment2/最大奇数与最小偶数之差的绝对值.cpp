#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int max_odd = -1;
    int min_even = 100;
    for (int i = 0; i < 6; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            if (num < min_even) {
                min_even = num;
            }
        }
        else {
            if (num > max_odd) {
                max_odd = num;
            }
        }
        
    }
    int diff = max_odd - min_even;
    if (diff < 0) {
        diff = - diff;
    }
    cout << diff << endl;
    return 0;
}