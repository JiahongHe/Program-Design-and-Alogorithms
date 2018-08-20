#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    // 在此处补充你的代码
    Complex & operator = (string s) {
        size_t pos = s.find('+');
        string real = s.substr(0, pos);
        this->r = atof(real.c_str());
        string imag = s.substr(pos + 1, s.length() - pos - 2);
        this->i = atof(imag.c_str());
        return *this;
    }
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}
