
#include <iostream>
using namespace std;

int main() {
    int T, A, B, C;
    cin >> T;
    while (T--) {
        cin >> A >> B >> C;
        if (B < A && C < A) {
            cout << "No" << endl;
        } else {
            if (B < C) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
