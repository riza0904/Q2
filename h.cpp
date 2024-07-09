#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> flattenedArray;
    vector<int> result(N * M);

    // Reading and flattening the 2D array
    for (int i = 0; i < N * M; ++i) {
        int num;
        cin >> num;
        flattenedArray.push_back(num);
    }

    // Sorting the flattened array
    sort(flattenedArray.begin(), flattenedArray.end());

    // Rearranging into the result array
    int maxIndex = flattenedArray.size() - 1;
    int minIndex = 0;
    for (int i = 0; i < N * M; ++i) {
        if (i % 2 == 0) {
            result[i] = flattenedArray[maxIndex--];
        } else {
            result[i] = flattenedArray[minIndex++];
        }
    }

    // Printing the result as a 2D array
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << result[i * M + j] << " ";
        }
        cout << endl;
    }

    return 0;
}
