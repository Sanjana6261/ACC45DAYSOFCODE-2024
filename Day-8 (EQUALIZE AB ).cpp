#include <iostream>
using namespace std;

int main() {
    int T, A, B, X;
    cin >> T;
    while (T--) {
        cin >> A >> B >> X;
        if ((B - A) % (2 * X) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}