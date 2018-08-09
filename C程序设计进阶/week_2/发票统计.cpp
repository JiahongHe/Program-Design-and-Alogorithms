#include <iostream>
#include <iomanip>
using namespace std;

int char_to_int(char a) {
    if (a == 'A') {
        return 0;
    }
    if (a == 'B') {
        return 1;
    }
    if (a == 'C') {
        return 2;
    }
    return -1;
}

char int_to_char(int a) {
    if (a == 0) {
        return 'A';
    }
    if (a == 1) {
        return 'B';
    }
    if (a == 2) {
        return 'C';
    }
    return ' ';
}

int main(int argc, const char * argv[]) {
    double people[3] = {0, 0, 0};
    double notes[3] = {0, 0, 0};
    int id, num;
    for (int _ = 0; _ < 3; _ ++) {
        cin >> id >> num;
        for (int i = 0; i < num; i++) {
            double note;
            char type;
            cin >> type;
            cin >> note;
            people[id - 1] += note;
            notes[char_to_int(type)] += note;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " " << fixed << setprecision(2) << people[i] << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << int_to_char(i) << " " << notes[i] << endl;
    }
    return 0;
}
