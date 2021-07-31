#include <bits/stdc++.h>

using namespace std;

class Graph {
public:
    map<int, list<pair<int, int>>> graph;

    void addEdge(int t, int u, int value, bool bidirect) {
        graph[t].push_back(make_pair(u, value));

        if (bidirect) {
            graph[u].push_back(make_pair(t, value));
        }
    }

    void printGraph() {
        for (auto i : graph) {
            cout << i.first << ":";
            for (auto j : i.second) {
                cout << j.first << "(" << j.second << ") ";
            }
            cout << endl;
        }
    }

    void graphBfs(int u) {
        map<int, bool> visited;
        queue<int> q;
        q.push(u);
        while (!q.empty()) {
            int frontElement = q.front();
            q.pop();
            if (!visited[frontElement]) {
                cout << frontElement << "->";
                visited[frontElement] = true;
            }
            for (auto a : graph) {
                if (!visited[a.first])
                    q.push(a.first);
            }
        }
        cout << "NULL" << endl;
    }

    void detectCycle(int u) {
        map<int, bool> visited;
        stack<int> s;
        cycle(visited, u, s);
        if (!s.empty())
            cout << "cyclic" << endl;
        else {
            cout << "Not cyclic" << endl;
        }
    }

    void cycle(map<int, bool>& visited, int u, stack<int>& s) {
        visited[u] = true;
        for (auto i : graph[u]) {
            if (visited[i.first]) {
                s.push(i.first);
                break;
            }
            cycle(visited, i.first, s);
        }
    }

    void graphDfs(int u) {
        map<int, bool> visited;
        dfs(visited, u);
        cout << "NULL" << endl;
    }
    void dfs(map<int, bool>& visited, int u) {
        visited[u] = true;
        cout << u << "->";

        for (auto i : graph[u]) {
            if (!visited[i.first])
                dfs(visited, i.first);
        }
    }
};

int main() {

    Graph g;
    g.addEdge(0, 1, 4, 0);
    g.addEdge(0, 7, 8, 0);
    g.addEdge(1, 7, 11, 0);
    g.addEdge(1, 2, 8, 0);
    g.addEdge(7, 8, 7, 0);
    g.addEdge(2, 8, 2, 0);
    g.addEdge(8, 6, 6, 0);
    g.addEdge(2, 5, 4, 0);
    g.addEdge(6, 5, 2, 0);
    g.addEdge(2, 3, 7, 0);
    g.addEdge(3, 3, 14, 0);
    g.addEdge(4, 4, 5, 0);
    g.addEdge(4, 1, 7, 0);
    g.addEdge(3, 4, 9, 0);
    g.addEdge(5, 4, 10, 0);
    g.addEdge(7, 6, 1, 0);

    g.printGraph();
    g.graphBfs(0);
    g.graphDfs(0);
    g.detectCycle(0);

    return 0;

}