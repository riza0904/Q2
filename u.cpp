#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int left_sum_even = 0, left_count_even = 0;
    int right_sum_odd = 0, right_count_odd = 0;

    int number;
    for (int i = 0; i < N; ++i) {
        cin >> number;
        if (number % 2 == 0) {
            // Even number
            left_sum_even += number;
            left_count_even++;
        } else {
            // Odd number
            right_sum_odd += number;
            right_count_odd++;
        }
    }

    // Calculate magic powers
    int left_magic_power = left_sum_even * left_count_even;
    int right_magic_power = right_sum_odd * right_count_odd;

    // Output results
    cout << "Left hand magic power: " << left_magic_power << endl;
    cout << "Right hand magic power: " << right_magic_power << endl;

    return 0;
}
