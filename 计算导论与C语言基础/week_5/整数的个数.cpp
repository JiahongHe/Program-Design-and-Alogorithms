#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count_1 = 0;
    int count_5 = 0;
    int count_10 = 0;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        switch (n) {
            case 1:
                count_1 ++;
                break;
            case 5:
                count_5 ++;
                break;
            case 10:
                count_10 ++;
                break;
            default:
                break;
        }
    }
    cout << count_1 << endl;
    cout << count_5 << endl;
    cout << count_10 << endl;
    return 0;
}
