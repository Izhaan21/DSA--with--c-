#include <iostream>
#include <vector>
using namespace std;

// Function to take input
void takeInput(vector<vector<int>> &matrix) {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    matrix.resize(n, vector<int>(m)); // resize matrix to n x m

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to print matrix
void printArray(const vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    cout << "\nMatrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to print matrix in wave form
void waveMatrixPrint(const vector<vector<int>> &matrix) {
    int n = matrix.size();      // rows
    int m = matrix[0].size();   // columns

    cout << "\nWave form print:\n";
    for (int StartingCol = 0; StartingCol < m; StartingCol++) {
        if ((StartingCol & 1) == 0) { // even column → top to bottom
            for (int i = 0; i < n; i++) {
                cout << matrix[i][StartingCol] << " ";
            }
        } else { // odd column → bottom to top
            for (int i = n - 1; i >= 0; i--) {
                cout << matrix[i][StartingCol] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix;

    takeInput(matrix);
    printArray(matrix);
    waveMatrixPrint(matrix);

    return 0;
}
