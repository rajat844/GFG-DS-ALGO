#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    //Function to detect cycle in an undirected graph.
    bool DFS(int u, int p, vector<int> g[], vector<bool>& vis) {
        vis[u] = true;
        for (auto i : g[u]) {
            if (!vis[i]) {
                if (DFS(i, u, g, vis))
                    return true;
            }
            else if (i != p || i == u)
                return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int>adj[]) {
        vector<bool> vis(V);
        for (int i = 0; i < V; i++)
            if (!vis[i] && DFS(i, -1, adj, vis))
                return true;
        return false;
        // Code here
    }
};

// { Driver Code Starts.
int main() {
    int V, E;
    cin >> V >> E;
    vector<int>adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    if (ans)
        cout << "1\n";
    else cout << "0\n";
    return 0;
}  // } Driver Code Ends