#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    int result = 0;
    for (int i = 0; i < 5; i ++) {
        int n;
        cin >> n;
        if (n < num) {
            result += n;
        }
    }
    cout << result << endl;
    return 0;
}
