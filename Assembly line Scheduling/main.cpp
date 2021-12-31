#include <bits/stdc++.h>

using namespace std;

int minTime(vector<vector<int>> a, vector<vector<int>> t, int e[], int x[], int col) {
    vector<int> t1(col);
    vector<int> t2(col);

    t1[0] = e[0] + a[0][0];
    t2[0] = e[1] + a[1][0];

    for (int i = 1; i < col;i++) {
        t1[i] = min(t1[i - 1] + a[i][0], t2[i - 1] + t[1][i] + a[i][1]);
        t2[i] = min(t2[i - 1] + a[i][1], t1[i - 1] + a[i][0] + t[i][1]);
    }

    int ans  = min(t1[col-1]+x[0],t2[col-1]+x[1]);
    return ans;

}


int main() {

    int col;
    int row = 2;
    cin >> col;
    vector<vector<int>> a(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; i < col;j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> t(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; i < col;j++) {
            cin >> t[i][j];
        }
    }

    int e[] = { 10,12 };
    int x[] = { 18,7 };


    int ans = minTime(a, t, e, x, col);



    return 0;
}