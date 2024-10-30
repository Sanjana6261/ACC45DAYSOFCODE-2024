#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];
        int p = 0;
        for (int i = 0; i < N; i++) {
            p += A[i] - K;
            if (p < 0) {
                cout << "NO " << i + 1 << endl;
                break;
            }
        }
        if (p >= 0) cout << "YES" << endl;
    }
    return 0;
}
