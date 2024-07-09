#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);

    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    vector<int> evenNumbers, oddNumbers;

    for (int i = 0; i < n; ++i) {
        if (cards[i] % 2 == 0) {
            evenNumbers.push_back(cards[i]);
        } else {
            oddNumbers.push_back(cards[i]);
        }
    }

    for (int i = 0; i < evenNumbers.size(); ++i) {
        cout << evenNumbers[i] << " ";
    }
    for (int i = 0; i < oddNumbers.size(); ++i) {
        cout << oddNumbers[i];
        if (i != oddNumbers.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
