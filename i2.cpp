#include <iostream>
using namespace std;

int main () {
    int w, h;
    cin >> w >> h;

    int n;
    cin >> n;

    int total = w * h;

    for (int i = 0; i < n; ++i){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int paint = (x2 - x1) * (y2 - y1);
        total -= paint;
    }

    cout << total;
    return 0;
}