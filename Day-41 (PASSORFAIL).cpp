#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, p;
        cin >> n >> x >> p;
        int score = x * 3 - (n - x);
        if (score >= p) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
    return 0;
}


