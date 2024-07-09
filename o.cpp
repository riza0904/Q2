#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int reversed = 0;
    int original = number;

    // Переворачиваем число
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    // Умножаем на 2
    int result = reversed * 2;

    cout << result << endl;

    return 0;
}
