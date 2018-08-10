#include <iostream>
#include <string>
using namespace std;

void step(int *a, string s, int i) {
    if (i > s.size() - 1) {
        return;
    }
    if(s.at(i) != ' ') {
        a[i] = 1;
        step(a, s, i + 1);
        cout << s[i];
    }
}

int main(int argc, const char * argv[]) {
    string s;
    getline(cin, s);
    int mark[500] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (mark[i] == 1) {
            continue;
        }
        else {
            if (s[i] == ' ') {
                cout << ' ';
            }
            else {
                step(mark, s, i);
            }
        }
    }
    cout << endl;
    return 0;
}
