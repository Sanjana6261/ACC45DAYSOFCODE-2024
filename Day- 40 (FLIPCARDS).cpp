#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int flips = min(x, n - x);
        cout << flips << endl;
    }
    return 0;
}

