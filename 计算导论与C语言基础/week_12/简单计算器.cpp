#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num1, num2;
    char op;
    cin >> num1 >> num2;
    cin >> op;
    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Divided by zero!" << endl;
                break;
            }
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }
    return 0;
}