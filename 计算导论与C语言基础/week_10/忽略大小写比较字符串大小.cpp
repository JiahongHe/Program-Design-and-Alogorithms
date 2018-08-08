#include <iostream>
#include <string>
using namespace std;

char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c - ('A' - 'a');
    }
    return c;
}

int main(int argc, const char * argv[]) {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int N = (int)min(s1.size(), s2.size());
    for (int i = 0; i < N; i++) {
        char c1 = to_lower(s1[i]);
        char c2 = to_lower(s2[i]);
        if (c1 > c2) {
            cout << ">" << endl;
            return 0;
        }
        if (c1 < c2) {
            cout << "<" << endl;
            return 0;
        }
    }
    if (s1.size() > s2.size()) {
        cout << ">" << endl;
        return 0;
    }
    if (s1.size() == s2.size()) {
        cout << "=" << endl;
        return 0;
    }
    else {
        cout << "<" << endl;
        return 0;
    }
    return 0;
}
