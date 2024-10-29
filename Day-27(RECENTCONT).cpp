#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int START38 = 0, LTIME108 = 0;
        for (int i = 0; i < N; i++) {
            string contest;
            cin >> contest;
            if (contest == "START38")
                START38++;
            else
                LTIME108++;
        }
        cout << START38 << " " << LTIME108 << endl;
    }
    return 0;
}


