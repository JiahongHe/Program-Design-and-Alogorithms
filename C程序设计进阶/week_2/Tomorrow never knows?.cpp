#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int char_to_int(char c, int p) {
    int num = c - '0';
    return pow(10, p) * num;
}

int get_year(string s) {
    int result = 0;
    for (int i = 0; i < 4; i++) {
        result += char_to_int(s[i], 3 - i);
    }
    return result;
}

int get_month_day(string s) {
    int result = 0;
    for (int i = 0; i < 2; i++) {
        result += char_to_int(s[i], 1 - i);
    }
    return result;
}

bool leapyear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, const char * argv[]) {
    string s;
    string year;
    string month;
    string day;
    getline(cin, s);
    year = s.substr(0, 4);
    month = s.substr(5, 2);
    day = s.substr(8, 2);
    int year_n = get_year(year);
    int month_n = get_month_day(month);
    int day_n = get_month_day(day);
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leapyear(year_n)) {
        days[2] = 29;
    }
    day_n += 1;
    if (day_n > days[month_n]) {
        month_n += 1;
        day_n = 1;
    }
    if (month_n > 12) {
        year_n += 1;
        month_n = 1;
    }
    cout << year_n << "-" << setfill('0') << setw(2) << month_n << "-" << setfill('0') << setw(2) << day_n << endl;
    return 0;
}