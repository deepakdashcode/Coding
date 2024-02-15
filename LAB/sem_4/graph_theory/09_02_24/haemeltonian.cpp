#include <iostream>
#include <vector>
#include <bits/stdc++.h> // For bitmask operations

using namespace std;

#define N 100 // Maximum number of vertices

bool isSafe(int v, int graph[N][N], int visited[N], int pathLength) {
    // 1. Check if this vertex is already present in the current path
    if (visited[v]) {
        return false;
    }

    // 2. Check if there is an edge from the previously visited vertex to this vertex
    int prev = pathLength > 1 ? visited[pathLength - 1] : -1;
    if (graph[prev][v] == 0) {
        return false;
    }

    return true;
}

bool hamiltonianPath(int graph[N][N], int v, int visited[N], int pathLength, int n) {
    // Base case: All vertices are visited and return to starting vertex
    if (pathLength == n && graph[v][0]) {
        return true;
    }

    // Try different vertices as the next hop
    for (int i = 0; i < n; i++) {
        if (isSafe(i, graph, visited, pathLength)) {
            visited[pathLength] = i;

            // Recur for the next vertex in the path
            if (hamiltonianPath(graph, i, visited, pathLength + 1, n)) {
                return true;
            }

            // Backtrack
            visited[pathLength] = -1;
        }
    }

    return false;
}

bool hamiltonianCycle(int graph[N][N], int v, int visited[N], int pathLength, int n) {
    if (pathLength == n && graph[v][0]) {
        return true;
    }
    for (int i = 0; i < n; i++) {
        if (isSafe(i, graph, visited, pathLength)) {
            visited[pathLength] = i;

            // Recur for the next vertex in the path
            if (hamiltonianCycle(graph, i, visited, pathLength + 1, n)) {
                return true;
            }

            // Backtrack
            visited[pathLength] = -1;
        }
    }

    return false;
}

int main() {
    int n;

    cout << "Enter the number of vertices: ";
    cin >> n;

    int graph[N][N];

    cout << "Enter the adjacency matrix (1 for connected, 0 otherwise):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    int visited[N], pathLength = 0;

    // Initialize visited array for backtracking
    for (int i = 0; i < n; i++) {
        visited[i] = -1;
    }

    // Start from the first vertex
    visited[0] = 0;

    // Check for Hamiltonian path
    if (hamiltonianPath(graph, 0, visited, pathLength + 1, n)) {
        cout << "The graph has a Hamiltonian path." << endl;
    } else {
        cout << "The graph does not have a Hamiltonian path." << endl;
    }

    // Re-initialize visited array
    for (int i = 0; i < n; i++) {
        visited[i] = -1;
    }

    visited[0] = 0;

    // Check for Hamiltonian cycle
    if (hamiltonianCycle(graph, 0, visited, pathLength + 1, n)) {
        cout << "The graph has a Hamiltonian cycle." << endl;
    } else {
        cout << "The graph does not have a Hamiltonian cycle." << endl;
    }

    return 0;
}
