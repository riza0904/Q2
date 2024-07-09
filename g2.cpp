#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> cards (n);

    for (int i = 0; i<n; ++i){
        cin >> cards[i];
    }

    vector <int> even;
    vector <int> odd;

    for (int i = 0; i < n; ++i){
        if (cards[i] % 2 == 0) {
            even.push_back (cards[i]);
        }
        else {
            odd.push_back (cards[i]);
        }
    }
    for (int i = 0; i < even.size(); ++i){
        cout << even[i] << " ";
    }
    for (int i = 0; i < odd.size(); ++i) {
        cout << odd[i] << " ";
    }
return 0;
}