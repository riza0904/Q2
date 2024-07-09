#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    // Extract the first digit
    int first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Calculate the sum of all digits
    int sum_of_digits = 0;
    int temp_number = number; // Temporary variable to avoid modifying original number
    while (temp_number > 0) {
        sum_of_digits += temp_number % 10;
        temp_number /= 10;
    }

    // Check if it's beautiful
    if (first_digit == sum_of_digits) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
