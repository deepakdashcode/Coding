#include <bits/stdc++.h>
using namespace std;
#define INF numeric_limits<int>::max()
void dijkstra(const vector<vector<int>>& adjMatrix, int src, int n) {
    vector<int> dist(n, INF);
    dist[src] = 0;
    vector<int> parent(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;  // Min-heap
    pq.push({dist[src], src});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (int v = 0; v < n; ++v) {
            if (adjMatrix[u][v] && dist[u] + adjMatrix[u][v] < dist[v]) {  // Check for adjacency and potential update
                dist[v] = dist[u] + adjMatrix[u][v];
                parent[v] = u; 
                pq.push({dist[v], v});  // Update distance and push to min-heap
            }
        }
    }

    stack<int> path;
    int dest;
    cout << "Enter the destination vertex: ";
    cin >> dest;

    if (dist[dest] == INF) {  // Handle unreachable destination
        cout << "Shortest path from " << src << " to " << dest << " is unreachable." << endl;
        return;
    }

    path.push(dest);
    while (parent[dest] != -1) {
        path.push(parent[dest]);
        dest = parent[dest];
    }

    cout << "Shortest path from " << src << " to " << dest << ":" << endl;
    while (!path.empty()) {
        cout << path.top() << " ";
        path.pop();
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));
    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> adjMatrix[i][j];
        }
    }

    int src;
    cout << "Enter the source vertex: ";
    cin >> src;

    dijkstra(adjMatrix, src, n);

    return 0;
}
