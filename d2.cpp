#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);

    for (int i = 0; i < n; ++i) {
        cin >> start[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> end[i];
    }

    int d;
    cin >> d;
    int goods = 0;

    for (int i = 0; i < n; ++i) {
        if (d >= start[i] and d <= end[i]){
            goods++;
        }
    }
    cout << goods;
    return 0;
}