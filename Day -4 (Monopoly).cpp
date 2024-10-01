#include <iostream>
using namespace std;

int main() {
    int T, P, Q, R, S;
    cin >> T;
    while(T--) {
        cin >> P >> Q >> R >> S;
        if (P > Q + R + S) {
            cout << "yes" << endl;
        } else if (Q > P + R + S) {
            cout << "yes" << endl;
        } else if (R > P + Q + S) {
            cout << "yes" << endl;
        } else if (S > P + Q + R) {
            cout << "yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
