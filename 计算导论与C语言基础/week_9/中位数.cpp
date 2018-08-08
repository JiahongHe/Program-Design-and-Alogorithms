#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n = -1;
    vector<int> results;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> arr = vector<int>(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if (n % 2 == 1) {
            results.push_back(arr[(n + 1) / 2 - 1]);
        }
        else {
            results.push_back((arr[n / 2 - 1] + arr[n / 2]) / 2);
        }
    }
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    return 0;
}