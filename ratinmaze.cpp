#include <iostream>
using namespace std;

// Function to check if it's safe to move to a particular cell
bool isSafe(int** arr, int x, int y, int n) {
    if (x < n && y < n && arr[x][y] == 1) {
        return true;
    }
    return false;
}

// Function to solve the Rat in a Maze problem using backtracking
bool ratInMaze(int** arr, int x, int y, int n, int** solarr) {
    // If the rat reaches the destination cell, mark it in the solution array
    if (x == n - 1 && y == n - 1) {
        solarr[x][y] = 1;
        return true;
    }

    // Check if it's safe to move to the current cell
    if (isSafe(arr, x, y, n)) {
        // Mark the cell in the solution array
        solarr[x][y] = 1;

        // Move down
        if (ratInMaze(arr, x + 1, y, n, solarr)) {
            return true;
        }

        // Move right
        if (ratInMaze(arr, x, y + 1, n, solarr)) {
            return true;
        }

        // If neither down nor right leads to the solution, backtrack
        solarr[x][y] = 0;
        return false;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the maze: ";
    cin >> n;

    // Dynamically allocate memory for the maze array
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter the maze elements (0 or 1):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Dynamically allocate memory for the solution array and initialize it with 0
    int** solarr = new int*[n];
    for (int i = 0; i < n; i++) {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            solarr[i][j] = 0;
        }
    }

    // Solve the maze problem
    if (ratInMaze(arr, 0, 0, n, solarr)) {
        cout << "Possible Path:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solarr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No path found!" << endl;
    }

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] solarr[i];
    }
    delete[] arr;
    delete[] solarr;

    return 0;
}
