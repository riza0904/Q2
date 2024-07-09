#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int n = 0;
    bool found = false;

    // Check for n in the range -60 to 60
    for (int i = -60; i <= 60; ++i) {
        if (a * pow(2, i) == b || b * pow(2, i) == a) {
            n = i;
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES " << n << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
