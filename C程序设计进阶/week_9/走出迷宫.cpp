#include <iostream>
#include <vector>
using namespace std;

int traverse(char **mat, int **vis, int m, int n,  int i, int j, int k) {
    int u = 9999;
    int l = 9999;
    int r = 9999;
    int d = 9999;
    vis[i][j] = 1;
    if (mat[i][j] == 'T') {
        vis[i][j] = -1;
        return k;
    }
    
    bool end[] = {false, false, false, false};
    if (i > 0 && vis[i - 1][j] != 1 && (mat[i - 1][j] == '.' || mat[i - 1][j] == 'T')) {
        end[0] = true;
    }
    if (j > 0 && vis[i][j - 1] != 1 && (mat[i][j - 1] == '.' || mat[i][j - 1] == 'T')) {
        end[1] = true;
    }
    if (i < m - 1 && vis[i + 1][j] != 1 && (mat[i + 1][j] == '.' || mat[i + 1][j] == 'T')) {
        end[2] = true;
    }
    if (j < n - 1 && vis[i][j + 1] != 1 && (mat[i][j + 1] == '.' || mat[i][j + 1] == 'T')) {
        end[3] = true;
    }
    
    if (!(end[0] || end[1] || end[2] || end[3])) {
        vis[i][j] = -1;
        return 9999;
    }
    
    if (i > 0 && mat[i - 1][j] != '#' && vis[i - 1][j] != 1) {
        u = traverse(mat, vis, m, n, i - 1, j, k + 1);
    }
    if (j > 0 && mat[i][j - 1] != '#' && vis[i][j - 1] != 1) {
        l = traverse(mat, vis, m, n, i, j - 1, k + 1);
    }
    if (i < m - 1 && mat[i + 1][j] != '#' && vis[i + 1][j] != 1) {
        r = traverse(mat, vis, m, n, i + 1, j, k + 1);
    }
    if (j < n - 1 && mat[i][j + 1] != '#' && vis[i][j + 1] != 1) {
        d = traverse(mat, vis, m, n, i, j + 1, k + 1);
    }
    //cout << i << " " << j << " vals: " << u << " " << l << " " << r << " " << d << endl;
    int res = min(u, min(l, min(r, d)));
    vis[i][j] = -1;
    return res;
}

int main() {
    int m, n;
    cin >> m >> n;
    char **matrix;
    int **visited;
    matrix = new char *[m];
    visited = new int *[m];
    for(int i = 0; i <m; i++) {
        matrix[i] = new char[n];
        visited[i] = new int [n];
    }
    
    for (int i = 0; i <m; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            matrix[i][j] = c;
            visited[i][j] = 0;
        }
    }
    int start_x = -1;
    int start_y = -1;
    for (int i = 0; i <m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 'S') {
                start_x = i;
                start_y = j;
                break;
            }
        }
    }
    int steps = traverse(matrix, visited, m, n, start_x, start_y, 0);
    cout << steps << endl;
    return 0;
}

/*
 
 for (int i = 0; i < m; i++) {
 for (int j = 0; j < n; j++) {
 cout << vis[i][j] << " ";
 }
 cout << endl;
 }
 for (int i = 0; i < m; i++) {
 for (int j = 0; j < n; j++) {
 cout << mat[i][j] << " ";
 }
 cout << endl;
 }
 cout << i << " " << j << " " << k << endl;
 cout << endl;
 */
