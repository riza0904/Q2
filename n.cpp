#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int> > grades(M, vector<int>(N));

    // Read grades
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grades[i][j];
        }
    }

    // Calculate averages and output
    for (int i = 0; i < M; ++i) {
        int sum = 0;
        for (int j = 0; j < N; ++j) {
            sum += grades[i][j];
        }
        int average = sum / N; // Integer division to get floor value
        cout << average << " ";
    }
    cout << endl;

    return 0;
}
