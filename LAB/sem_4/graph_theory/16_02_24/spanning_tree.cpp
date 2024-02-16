#include <bits/stdc++.h>

using namespace std;

// Function to calculate the determinant of a matrix
double determinant(vector<vector<double>>& mat) {
    int n = mat.size();
    double det = 1;
    for (int i = 0; i < n; i++) {
        int maxRow = i;
        for (int j = i + 1; j < n; j++) {
            if (fabs(mat[j][i]) > fabs(mat[maxRow][i])) {
                maxRow = j;
            }
        }
        if (maxRow != i) {
            swap(mat[i], mat[maxRow]);
            det *= -1;
        }
        det *= mat[i][i];
        if (fabs(det) < 1e-9) return 0; // If determinant is close to zero, return 0
        for (int j = i + 1; j < n; j++) {
            double factor = mat[j][i] / mat[i][i];
            for (int k = i; k < n; k++) {
                mat[j][k] -= factor * mat[i][k];
            }
        }
    }
    return det;
}

// Function to calculate the number of spanning trees
int numSpanningTrees(vector<vector<double>>& graph) {
    int n = graph.size();
    vector<vector<double>> laplacian(n, vector<double>(n, 0));
    // Construct Laplacian matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                laplacian[i][i] += graph[i][j];
                laplacian[i][j] = -graph[i][j];
            }
        }
    }
    // Calculate cofactor of any element
    vector<vector<double>> cofactor(n - 1, vector<double>(n - 1, 0));
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            cofactor[i - 1][j - 1] = laplacian[i][j];
        }
    }
    // Calculate the determinant of the cofactor matrix
    double det = determinant(cofactor);
    return det;
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<vector<double>> graph(n, vector<double>(n, 0));
    cout << "Enter the adjacency matrix (space-separated values):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    int numTrees = numSpanningTrees(graph);
    cout << "Maximum number of spanning trees: " << numTrees << endl;
    return 0;
}
/*
Enter the number of vertices: 3
Enter the adjacency matrix (space-separated values):
0 1 1
1 0 1
1 1 0
Maximum number of spanning trees: 3
*/