#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int dates[3] = {1, 3, 5};
    int day;
    //cout << "when is she invited?" << endl;
    cin >> day;
    for (int i = 0; i < 3; i++) {
        if (day == dates[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
