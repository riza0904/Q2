#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;

    cin >> N;

    vector<vector<int> > matrix(N, vector<int>());

    // Чтение строк и нахождение максимума в каждой строке
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int num;
            cin >> num;
            matrix[i].push_back(num);
        }

        // Находим максимальное значение в текущей строке
        int max_value = matrix[i][0];
        for (int j = 1; j < N; ++j) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }

        // Заполняем текущую строку максимальным значением
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = max_value;
        }
    }

    // Вывод измененных строк
   
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
