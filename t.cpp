#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, direction;
    cin >> n >> m >> direction;

    int start = (direction == 1) ? n : m;
    int end = (direction == 1) ? m : n;
    
    bool first = true; // to handle space before numbers
    
    for (int num = start; direction == 1 ? num <= end : num >= end; num += direction) {
        // Check if the square root is an integer
        if (sqrt(num) == floor(sqrt(num))) {
            // Print the number
            if (!first) {
                cout << " ";
            
            cout << num;
            first = false;
        }
    }
    
    cout << endl;

    return 0;
}
