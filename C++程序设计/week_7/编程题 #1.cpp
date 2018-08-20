#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class CArray3D {
    vector<vector<vector<int>>> array;
public:
    CArray3D(int n, int m, int k) {
        array = vector<vector<vector<int>>>(n, vector<vector<int>>(m, vector<int>(k, 0)));
    }
    vector<vector<int>>& operator[](int i) {
        return array[i];
    }
};
int main()
{
    CArray3D<int> a(3,4,5);
    int No = 0;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                a[i][j][k] = No ++;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                cout << a[i][j][k] << ",";
    return 0;
}
