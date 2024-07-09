#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the height of the pyramid: ";
    cin >> N;

    // Loop through each level of the pyramid
    for (int i = 1; i <= N; ++i) {
        // Print i stars for the current level
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        // Move to the next line after printing stars for the current level
        cout << endl;
    }

    return 0;
}
