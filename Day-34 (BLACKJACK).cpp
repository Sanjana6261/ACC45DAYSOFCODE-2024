#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int sum = A + B;
        if (sum > 21 || sum == 21) {
            cout << "-1" << endl;
        } else {
            int num = 21 - sum;
            if (num >= 1 && num <= 10) {
                cout << num << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
