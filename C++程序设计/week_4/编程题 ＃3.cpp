#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码
class Array2 {
private:
    int *array;
    int m;
    int n;
public:
    Array2 () {
        m = 0;
        n = 0;
        array = NULL;
    }
    Array2 (int m_, int n_) {
        m = m_;
        n = n_;
        array = new int[m * n];
    }
    
    Array2 (const Array2 & a2) {
        if (array != NULL) {
            delete [] array;
        }
        m = a2.m;
        n = a2.n;
        array = new int [m * n];
        memcpy(array, a2.array, m * n * sizeof(int));
    }
    
    Array2 & operator = (const Array2 & a2) {
        if (array != NULL) {
            delete [] array;
        }
        m = a2.m;
        n = a2.n;
        array = new int [m * n];
        memcpy(array, a2.array, m * n * sizeof(int));
        return *this;
    }
    
    int * operator [] (int i) {
        return array + i * n;
    }
    
    int & operator () (int i, int j) {
        return array[i * n + j];
    }
        
    ~Array2 () {
        if (array != NULL) {
            delete [] array;
        }
    }
};

int main() {
    Array2 a(3,4);
    int i,j;
    for( i = 0;i < 3; ++i )
        for( j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b; b = a;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
