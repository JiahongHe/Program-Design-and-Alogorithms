#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str, substr;
    while(cin >> str >> substr) {
        int max_ind = 0;
        for (int i = 1; i < str.size(); i++) {
            if (str[i] > str[max_ind]) {
                max_ind = i;
            }
        }
        str.insert(max_ind + 1, substr);
        cout << str << endl;
    }
    return 0;
}