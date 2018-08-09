#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for (int d = 1; d < 5; d++) {
        for (int h = 0; h < 5; h++) {
            for (int p = 0; p < 5; p++) {
                for (int t = 0; t < 5; t++) {
                    if (d != h && h != p && p != t && h != p && h != t && p != t) {
                        if (((d == 1) + (h == 4) + (p == 3)) == 1) {
                            if (((d == 4) + (h == 1) + (p == 2) + (t == 3)) == 1) {
                                if(((d == 3) + (h == 4)) == 1) {
                                    if (((d == 3) + (h == 2) + (p == 1) + (t == 4)) == 1) {
                                        if ((d + h + p + t) == 10) {
                                            cout << p << endl;
                                            cout << d << endl;
                                            cout << t << endl;
                                            cout << h << endl;
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
