#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int> > arr(m, vector<int>(n));

    // Read matrix elements
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    // Read the limit
    int limit;
    cin >> limit;

    // Check if any element exceeds the limit
    bool penalty = false;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] > limit) {
                penalty = true;
                break;
            }
        }
        if (penalty) break;
    }

    // Output result
    if (penalty) {
        cout << "Penalty!" << endl;
    } else {
        cout << "No penalty for today." << endl;
    }

    return 0;
}
