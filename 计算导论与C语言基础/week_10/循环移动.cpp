#include <iostream>
#include <string>
using namespace std;

void reversed(int *arr, int start, int end) {
    for ( ;start < end; start++, end--) {
        int s = arr[start];
        arr[start] = arr[end];
        arr[end] = s;
    }
}

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reversed(arr, n - m, n - 1);
    reversed(arr, 0, n - m - 1);
    reversed(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}