#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cin >> num;
    cout << hex << num << endl;
    cout << dec << fixed << setfill('0') << setw(10) << num << endl;
    return 0;
}
