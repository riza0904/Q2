#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool isFullySymmetric = true;
    int half = n / 2;

    for (int i = 0; i < half; ++i) {
        if (arr[i] != reverseNumber(arr[n - 1 - i])) {
            isFullySymmetric = false;
            break;
        }
    }

    if (isFullySymmetric) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
