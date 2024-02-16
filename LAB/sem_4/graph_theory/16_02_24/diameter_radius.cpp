#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

// Function to perform BFS and find the shortest distance from source to all other vertices
vector<int> shortestDistances(int source, const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> distances(n, INF);
    distances[source] = 0;
    queue<int> q;
    q.push(source);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < n; ++v) {
            if (graph[u][v] && distances[v] == INF) {
                distances[v] = distances[u] + 1;
                q.push(v);
            }
        }
    }
    return distances;
}

// Function to calculate eccentricity of a vertex
int eccentricity(int vertex, const vector<vector<int>>& graph) {
    vector<int> distances = shortestDistances(vertex, graph);
    int maxDistance = *max_element(distances.begin(), distances.end());
    return maxDistance;
}

// Function to calculate the distance between two vertices
int distanceBetweenVertices(int u, int v, const vector<vector<int>>& graph) {
    vector<int> distances = shortestDistances(u, graph);
    return distances[v];
}

// Function to calculate the diameter of the graph
int diameter(const vector<vector<int>>& graph) {
    int n = graph.size();
    int maxDiameter = 0;
    for (int i = 0; i < n; ++i) {
        int e = eccentricity(i, graph);
        maxDiameter = max(maxDiameter, e);
    }
    return maxDiameter;
}

// Function to calculate the radius of the graph
int radius(const vector<vector<int>>& graph) {
    int n = graph.size();
    int minEccentricity = INF;
    for (int i = 0; i < n; ++i) {
        int e = eccentricity(i, graph);
        minEccentricity = min(minEccentricity, e);
    }
    return minEccentricity;
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    // Calculate distances between vertices
    // int u, v;
    // cout << "Enter two vertices to find the distance between them: ";
    // cin >> u >> v;
    // int distUV = distanceBetweenVertices(u, v, graph);
    // cout << "Distance between vertex " << u << " and vertex " << v << ": " << distUV << endl;

    // 
    for(int i = 0; i < n; i ++){
        for(int j = i + 1; j < n; j ++)
        {
            int distUV = distanceBetweenVertices(i, j, graph);
            cout << "Distance between vertex " << i << " and vertex " << j << ": " << distUV << endl;
        }
    }

    // Calculate eccentricity of each vertex
    cout << "Eccentricity of each vertex:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Eccentricity of vertex " << i << ": " << eccentricity(i, graph) << endl;
    }

    // Calculate diameter and radius of the graph
    cout << "Diameter of the graph: " << diameter(graph) << endl;
    cout << "Radius of the graph: " << radius(graph) << endl;

    return 0;
}
/*
Enter the number of vertices: 5
Enter the adjacency matrix:
0 1 0 0 0
1 0 1 1 0
0 1 0 0 0
0 1 0 0 1
0 0 0 1 0
Distance between vertex 0 and vertex 1: 1
Distance between vertex 0 and vertex 2: 2
Distance between vertex 0 and vertex 3: 2
Distance between vertex 0 and vertex 4: 3
Distance between vertex 1 and vertex 2: 1
Distance between vertex 1 and vertex 3: 1
Distance between vertex 1 and vertex 4: 2
Distance between vertex 2 and vertex 3: 2
Distance between vertex 2 and vertex 4: 3
Distance between vertex 3 and vertex 4: 1
Eccentricity of each vertex:
Eccentricity of vertex 0: 3
Eccentricity of vertex 1: 2
Eccentricity of vertex 2: 3
Eccentricity of vertex 3: 2
Eccentricity of vertex 4: 3
Diameter of the graph: 3
Radius of the graph: 2
*/