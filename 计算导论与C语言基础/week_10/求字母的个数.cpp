#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    getline(cin, s);
    int count[5] = {0};
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case 'a':
                count[0]++;
                break;
            case 'e':
                count[1]++;
                break;
            case 'i':
                count[2]++;
                break;
            case 'o':
                count[3]++;
                break;
            case 'u':
                count[4]++;
                break;
            default:
                break;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << count[i] << " ";
    }
    cout << endl;
    return 0;
}
