#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int P, Q;
        cin >> P >> Q;
        int total_points = P + Q;
        if (total_points % 4 == 0 || total_points % 4 == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}


