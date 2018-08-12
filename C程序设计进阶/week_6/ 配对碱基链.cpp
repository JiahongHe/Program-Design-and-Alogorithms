#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<string> outputs;
    for (int k = 0; k < num; k++) {
        string s_in;
        cin >> s_in;
        char s_out[s_in.size() + 1];
        for (int i = 0; i < s_in.size(); i++) {
            switch (s_in[i]) {
                case 'A':
                    s_out[i] = 'T';
                    break;
                case 'T':
                    s_out[i] = 'A';
                    break;
                case 'G':
                    s_out[i] = 'C';
                    break;
                case 'C':
                    s_out[i] = 'G';
                    break;
                default:
                    s_out[i] = ' ';
                    break;
            }
        }
        s_out[s_in.size()] = '\0';
        outputs.push_back(s_out);
    }
    for (int k = 0; k < outputs.size(); k++) {
        cout << outputs[k] << endl;
    }
    return 0;
}