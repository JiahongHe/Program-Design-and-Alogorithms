#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == i) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 'N' << endl;
    return 0;
}