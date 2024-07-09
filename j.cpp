#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Read the matrix
    vector<vector<int> > mat(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    // Check if the matrix is perfect
    bool isPerfect = true;
    for (int i = 0; i < n && isPerfect; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (mat[i][j] != mat[j][i]) {
                isPerfect = false;
                break;
            }
        }
    }

    // Output the result
    if (isPerfect) {
        cout << "Perfect." << endl;
    } else {
        cout << "Not perfect." << endl;
    }

    return 0;
}
