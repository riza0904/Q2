#include <iostream>
using namespace std;

int main() {
    int n, shift;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cin >> shift; 

    shift = (shift % n + n) % n;

    int result[n];
    for (int i = 0; i < n; ++i) {
        result[(i + shift) % n] = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}