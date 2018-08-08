#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    double x[n];
    double y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double max_dist = 0;
    int ind1 = 0;
    int ind2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dist = pow((pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)), 0.5);
            if (dist > max_dist) {
                max_dist = dist;
                ind1 = i;
                ind2 = j;
            }
        }
    }
    cout << fixed << setprecision(4) << max_dist << endl;
    return 0;
}
