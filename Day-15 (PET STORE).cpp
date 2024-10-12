#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int freq[101] = {0};
        for (int i = 0; i < N; i++) {
            int A;
            cin >> A;
            freq[A]++;
        }
        bool possible = true;
        for (int i = 1; i <= 100; i++) {
            if (freq[i] % 2 != 0) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

