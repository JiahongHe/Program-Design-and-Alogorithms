#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    int notes[] = {100, 50, 20, 10, 5, 1};
    for (int i = 0; i < 6; i++) {
        cout << num / notes[i] << endl;
        num = num % notes[i];
    }
    return 0;
}
