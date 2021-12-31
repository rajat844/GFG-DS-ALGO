#include <bits/stdc++.h>

using namespace std;

void dijktrasShortPath(vector<vector<int>> graph, int src,int r) {
    vector<int> dist(r,INT_MAX);
    vector<bool> distC(r,false);

    dist[src] = 0;

    for(int i = 0; i< r-1)
}

int main() {
    int r;
    cin >> r;
    vector<vector<int>> graph(r, vector<int>(r));

    for (int i = 0; i < r;i++) {
        for (int j = 0; j < r;j++) {
            int x;
            cin >> x;
            graph[i][j] = x;
        }
    }

    dijktrasShortPath(graph, 0,r);

    return 0;
}