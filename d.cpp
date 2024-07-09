#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> startTimes(n);
    vector<int> endTimes(n);

    for (int i = 0; i < n; ++i) {
        cin >> startTimes[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> endTimes[i];
    }

    int t;
    cin >> t;

    int goodStudents = 0;

    for (int i = 0; i < n; ++i) {
        if (t >= startTimes[i] && t <= endTimes[i]) {
            goodStudents++;
        }
    }

    cout << goodStudents << endl;

    return 0;
}
