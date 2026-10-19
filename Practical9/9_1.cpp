
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void DFS(int node, vector<int> adj[], vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int next : adj[node]) {
        if (!visited[next]) {
            DFS(next, adj, visited);
        }
    }
}

void BFS(int start, vector<int> adj[], int n) {
    vector<bool> visited(n + 1, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int next : adj[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

bool hasCycle(int node, int parent, vector<int> adj[],
              vector<bool>& visited) {
    visited[node] = true;

    for (int next : adj[node]) {
        if (!visited[next]) {
            if (hasCycle(next, node, adj, visited)) {
                return true;
            }
        } else if (next != parent) {
            return true;
        }
    }

    return false;
}

int main() {
    int n, e;
    cout << "Enter number of buildings and roads: ";
    cin >> n >> e;

    vector<int> adj[n + 1];

    cout << "Enter the roads between buildings:\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter starting building: ";
    cin >> start;

    vector<bool> visited(n + 1, false);

    cout << "DFS Traversal: ";
    DFS(start, adj, visited);

    cout << "\nBFS Traversal: ";
    BFS(start, adj, n);

    vector<bool> cycleVisited(n + 1, false);
    bool cycle = false;

    for (int i = 1; i <= n; i++) {
        if (!cycleVisited[i]) {
            if (hasCycle(i, -1, adj, cycleVisited)) {
                cycle = true;
                break;
            }
        }
    }

    cout << "\nCycle exists: ";
    if (cycle)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
    return 0;
}
