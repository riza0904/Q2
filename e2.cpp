#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector <int> a(n);

    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int max = 0;
    for (int i = 0; i<n; ++i) {
        for (int j = i + 1; j < n; ++j){
            int pro = a[i] * a[j];
          if (pro > max) {
            max = pro;
          }
        }
    }
    cout << max;
    return 0;
}