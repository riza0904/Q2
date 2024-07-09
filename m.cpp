#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int> > points(m, vector<int>(n));

    // Read matrix elements
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> points[i][j];
        }
    }

    // Find maximum total points
    int maxPoints = 0;
    for (int i = 0; i < m; ++i) {
        int totalPoints = 0;
        for (int j = 0; j < n; ++j) {
            totalPoints += points[i][j];
        }
        if (totalPoints > maxPoints) {
            maxPoints = totalPoints;
        }
    }

    // Output the result
    cout << maxPoints << endl;

    return 0;
}
