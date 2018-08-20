#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    double num;
    cin >> num;
    cout << fixed << setprecision(5) << num << endl;
    cout << fixed << setprecision(7) << scientific << num << endl;
    return 0;
}
