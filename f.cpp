#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    sort(elements.begin(), elements.end());

    int max_count = 1, current_count = 1;
    vector<int> most_frequent;
    most_frequent.push_back(elements[0]);

    for (int i = 1; i < n; ++i) {
        if (elements[i] == elements[i - 1]) {
            current_count++;
        } else {
            if (current_count > max_count) {
                max_count = current_count;
                most_frequent.clear();
                most_frequent.push_back(elements[i - 1]);
            } else if (current_count == max_count) {
                most_frequent.push_back(elements[i - 1]);
            }
            current_count = 1;
        }
    }

    // Check last group of elements
    if (current_count > max_count) {
        most_frequent.clear();
        most_frequent.push_back(elements[n - 1]);
    } else if (current_count == max_count) {
        most_frequent.push_back(elements[n - 1]);
    }

    // Output the most frequent elements
    for (size_t i = 0; i < most_frequent.size(); ++i) {
        cout << most_frequent[i] << " ";
    }
    cout << endl;

    return 0;
}
