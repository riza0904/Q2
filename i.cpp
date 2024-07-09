#include <iostream>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    int n;
    cin >> n;

    int totalUnpaintedArea = w * h;

    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int paintedArea = (x2 - x1) * (y2 - y1);

        totalUnpaintedArea -= paintedArea;
    }

    cout << totalUnpaintedArea << endl;

    return 0;
}
