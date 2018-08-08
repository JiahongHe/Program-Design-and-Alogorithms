#include <iostream>
using namespace std;

int bike_better(int d) {
    double time_walk = d / 1.2;
    double time_bike = d / 3.0 + 50;
    if (time_bike < time_walk) {
        return 1;
    }
    if (time_bike == time_walk) {
        return 0;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int arr[4];
    for (int i = 0; i < n; i++) {
        int dist;
        cin >> dist;
        arr[i] = bike_better(dist);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cout << "Bike" << endl;
        }
        if (arr[i] == 0) {
            cout << "All" << endl;
        }
        if (arr[i] == -1) {
            cout << "Walk" << endl;
        }
    }
    return 0;
}
