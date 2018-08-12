#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;
    char c1,c2;
    cin >> num1 >> c1 >> num2 >> c2 >> result;
    if (num1 + num2 == result) {
        cout << "+" << endl;
        return 0;
    }
    if (num1 - num2 == result) {
        cout << "-" << endl;
        return 0;
    }
    if (num1 / (double)num2 == result) {
        cout << "/" << endl;
        return 0;
    }
    if (num1 * num2 == result) {
        cout << "*" << endl;
        return 0;
    }
    if (num1 % num2 == result) {
        cout << "%" << endl;
        return 0;
    }
    cout << "error" << endl;
    return 0;
}
