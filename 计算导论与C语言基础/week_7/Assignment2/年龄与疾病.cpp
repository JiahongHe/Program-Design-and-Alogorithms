#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    /*
     group1: patients under the age of 18.
     group2: patients between the age of 19 and 35.
     group3: patients between the age of 36 and 60.
     group4: patients older than 60.
     */
    double groups[4];
    for (int i = 0; i < 4; i++) {
        groups[i] = 0;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int age;
        cin >> age;
        if (age < 19) {
            groups[0] ++;
        }
        if (age >= 19 && age < 36) {
            groups[1] ++;
        }
        if (age >= 36 && age < 61) {
            groups[2] ++;
        }
        if (age >= 61) {
            groups[3] ++;
        }
    }
    for (int i = 0; i < 4; i++) {
        switch (i) {
            case 0:
                cout << "1-18: ";
                break;
            case 1:
                cout << "19-35: ";
                break;
            case 2:
                cout << "36-60: ";
                break;
            case 3:
                cout << "60-: ";
                break;
            default:
                break;
        }
        
        cout << fixed << setprecision(2) << groups[i] * 100 / n << "%" << endl;
    }
    return 0;
}