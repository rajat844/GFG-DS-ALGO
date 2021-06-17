#include<bits/stdc++.h>


using namespace std;


#define MAX 1000
int mat[MAX][MAX];


int kthSmallest(int mat[MAX][MAX], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0;i < n;i++) {
        for (int j = 0; j < n;j++) {
            pq.push(mat[i][j]);
        }
    }

    while (k != 1) {
        pq.pop();
        k--;
    }
    return pq.top();
}



int main() {

    int n;
    cin >> n;

    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            cin >> mat[i][j];
    int r;
    cin >> r;
    cout << kthSmallest(mat, n, r) << endl;
    return 0;
}
