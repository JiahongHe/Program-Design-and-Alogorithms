#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0) {
        cout << "Y" << endl;
        return 0;
    }
    if (year % 400 == 0) {
        cout << "Y" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}

