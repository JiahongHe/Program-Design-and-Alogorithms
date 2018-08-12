#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
int main() {
    int num;
    double minimum;
    cin >> num >> minimum;
    vector<string> IDs;
    vector<double> Lvls;
    for (int i = 0; i < num; i++) {
        string id;
        double lvl;
        cin >> id >> lvl;
        if (lvl > minimum) {
            IDs.push_back(id);
            Lvls.push_back(lvl);
        }
    }
    int N = (int)IDs.size();
    if (N == 0) {
        cout << "None." << endl;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (Lvls[j] < Lvls[j + 1]) {
                double tmp_lvl;
                string tmp_id;
                tmp_lvl = Lvls[j];
                Lvls[j] = Lvls[j + 1];
                Lvls[j + 1] = tmp_lvl;
                tmp_id = IDs[j];
                IDs[j] = IDs[j + 1];
                IDs[j + 1] = tmp_id;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << IDs[i] << " " << fixed  << setprecision(1) << Lvls[i] << endl;
    }
    return 0;
}
