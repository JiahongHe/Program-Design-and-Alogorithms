#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;

class Warrior {
public:
    string name;
    int hp;
    static map<string, int> warrior_types;
    static map<string, int> all_warriors;
    
    Warrior(string name_, int hp_) {
        name = name_;
        hp = hp_;
        all_warriors[name] += 1;
    }
};

class HeadQuater {
private:
    int hp;
public:
    string name;
    vector<Warrior> warriors;
    vector<string> products;
    map<string, int> warrior_nums;
    
    HeadQuater(string name_, int hp_, const vector<string> products_) {
        name = name_;
        hp = hp_;
        products = products_;
        for (int i = 0; i < products_.size(); i++) {
            string name_ = products[i];
            warrior_nums.insert(make_pair(name_, 0));
        }
    }
    
    bool add_warrior(int time_stamp) {
        string warrior_name = products[time_stamp % products.size()];
        int warrior_hp = Warrior::warrior_types[warrior_name];
        if (hp > warrior_hp) {
            Warrior new_warrior = Warrior(warrior_name, warrior_hp);
            hp -= warrior_hp;
            warriors.push_back(new_warrior);
            warrior_nums[warrior_name] += 1;
            cout << setw(3) << setfill('0') << time_stamp << " " << name << " ";
            cout << warrior_name << " " << time_stamp + 1 << " born with strength ";
            cout << warrior_hp << "," << warrior_nums[warrior_name] << " " << warrior_name << " in " << name;
            cout << " headquarter" << endl;
            return true;
        }
        else {
            cout << setw(3) << setfill('0') << time_stamp << " " << name;
            cout << " headquarter stops making warriors" << endl;
            return false;
        }
    }
    
};


map<string, int> Warrior::all_warriors;
map<string, int> Warrior::warrior_types;

int main(int arvc, char * argv[]) {
    int round;
    cin >> round;
    for (int k = 0; k < round; k++) {
        int hq_hp;
        cin >> hq_hp;
        vector<string> name_warriors =  {"dragon", "ninjia", "iceman", "lion", "wolf"};
        map<string, int> warrior_types;
        for (int i = 0; i < name_warriors.size(); i++) {
            int health;
            cin >> health;
            Warrior::all_warriors.insert(make_pair(name_warriors[i], 0));
            Warrior::warrior_types.insert(make_pair(name_warriors[i], health));
        }
        vector<string> blue_products = {"lion", "dragon", "ninjia", "iceman", "wolf"};
        vector<string> red_products {"iceman", "lion", "wolf", "ninjia", "dragon"};
        HeadQuater Red = HeadQuater("red", hq_hp, red_products);
        HeadQuater Blue = HeadQuater("blue", hq_hp, blue_products);
        
        int time = 0;
        bool con_red = Red.add_warrior(time);
        bool con_blue = Blue.add_warrior(time);
        while (con_red || con_blue) {
            time++;
            if (con_red) {
                con_red = Red.add_warrior(time);
            }
            
            if (con_blue) {
                con_blue = Blue.add_warrior(time);
            }
        }
    }
    return 0;
}
