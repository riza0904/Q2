#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int max_digit = 0;
    int min_digit = 9;
    int original_number = number;
    
    while (number > 0) {
        int digit = number % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        if (digit < min_digit) {
            min_digit = digit;
        }
        number /= 10;
    }

    cout << max_digit;
    cout << " " << min_digit << endl;

    return 0;
}
