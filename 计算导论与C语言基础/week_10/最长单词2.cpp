#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int counter[500][2] = {0};
    getline(cin, s);
    int count = 0;
    int index= 0;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            counter[index][0] = i;
            counter[index][1] = count;
            index ++;
            break;
        }
        if (s[i] ==  ' ') {
            counter[index][0] = i;
            counter[index][1] = count;
            count = 0;
            index ++;
            continue;
        }
        count++;
    }
    int max_size_ = 0;
    int ind_ = -1;
    for (int i = 0; i < index; i++) {
        if (counter[i][1] > max_size_) {
            max_size_ = counter[i][1];
            ind_ = counter[i][0] -  counter[i][1];
        }
    }
    cout << s.substr(ind_, max_size_) << endl;
    return 0;
}
