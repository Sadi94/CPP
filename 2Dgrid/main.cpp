#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the size of the 2D grid (nxn): " << endl;
    cin >>n;
    int grid[n][n];
    cout << "Enter the elements of the grid:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    int max_sum = 0;
    int max_i, max_j;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            if (i > 0) sum += grid[i-1][j];  //top
            if (j > 0) sum += grid[i][j-1];  //left
            if (i < n-1) sum += grid[i+1][j];  //bottom
            if (j < n-1) sum += grid[i][j+1];  //right
            if (sum > max_sum) {
                max_sum = sum;
                max_i = i;
                max_j = j;
            }
        }
    }
    cout << "The cell with maximum sum of adjacent cells is at index (" << max_i << ", " << max_j << ") with a sum of " << max_sum << endl;
    return 0;
}
