#include <iostream>
#include <iterator>
#include <utility>
#include <string>
#include <list>
#include <map>

using namespace std;
int main() {
    int num_cmds;
    cin >> num_cmds;
    map<int, list<int>> lists;
    for (int i = 0; i < num_cmds; i++) {
        string cmd;
        cin >> cmd;
        //cout << cmd << " ";
        if (cmd == "new") {
            int id;
            cin >> id;
            list<int> new_list;
            lists[id] = new_list;
        }
        if (cmd == "add"){
            int id, num;
            cin >> id >> num;
            lists[id].push_back(num);
        }
        if (cmd == "merge") {
            int id1, id2;
            cin >> id1 >> id2;
            lists[id1].merge(lists[id2]);
        }
        if (cmd == "unique") {
            int id;
            cin >> id;
            lists[id].unique();
        }
        if (cmd == "out") {
            int id;
            cin >> id;
            list<int> tmp_list = lists[id];
            tmp_list.sort();
            for (list<int>::iterator it = tmp_list.begin(); it != tmp_list.end(); it++) {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}