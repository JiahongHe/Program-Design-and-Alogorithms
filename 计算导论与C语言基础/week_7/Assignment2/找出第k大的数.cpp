#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, k;
    cin >> N;
    cin >> k;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++) {
        int max = -1;
        int ind_max = -1;
        for (int j = i; j < N; j++) {
            if (arr[j] > max) {
                max = arr[j];
                ind_max = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[ind_max];
        arr[ind_max] = temp;
    }
    cout << arr[k - 1] << endl;
    return 0;
}