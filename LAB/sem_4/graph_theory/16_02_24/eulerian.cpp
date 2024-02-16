#include <bits/stdc++.h>
using namespace std;

bool allDegreesEven(const vector<vector<int>>& graph) {
    int n = graph.size();
    for (int i = 0; i < n; ++i) {
        int degree = 0;
        for (int j = 0; j < n; ++j) {
            degree += graph[i][j];
        }
        if (degree % 2 != 0) {
            return false;
        }
    }
    return true;
}

// Function to check if the graph is Eulerian
string isEulerian(const vector<vector<int>>& graph) {
    int n = graph.size();
    if (!allDegreesEven(graph)) {
        return "Graph is not Eulerian because not all vertices have even degrees.";
    }
    return "Graph is Eulerian.";
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    // Input adjacency matrix
    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    string result = isEulerian(graph);
    cout << result << endl;

    return 0;
}


/*
Enter the number of vertices: 4
Enter the adjacency matrix:
0 1 0 1
1 0 1 0
0 1 0 1
1 0 1 0
Graph is Eulerian.
*/

/*
Enter the number of vertices: 3
Enter the adjacency matrix:
0 0 1
0 0 1
1 1 0
Graph is not Eulerian because not all vertices have even degrees.
*/