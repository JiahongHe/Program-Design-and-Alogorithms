#include <iostream>
using namespace std;

int find(int *a, string str, int i) {
    if (i > str.size()) {
        return i;
    }
    if (str[i] == ')') {
        return i;
    }
    else {
        if (str[i] == '(') {
            int n = find(a, str, i + 1);
            if (n < str.size()) {
                a[i] = 1;
                a[n] = 1;
                return find(a, str, n + 1);
            }
            else {
                a[i] = -1;
                return n;
            }
        }
        else {
            return find(a, str, i + 1);
        }
    }
}

int main(int argc, const char * argv[]) {
    string s;
    getline(cin, s);
    int mark[200] = {0};
    int i = find(mark, s, 0);
    while (i < s.size()) {
        i = find(mark, s, i + 1);
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;
    for (int i = 0; i < s.size(); i++) {
        if(mark[i] != 1) {
            if (s[i] == '(') {
                cout << '$';
                continue;
            }
            if (s[i] == ')') {
                cout << '?';
                continue;
            }
        }
        cout << ' ';
    }
    cout << endl;
    return 0;
}
