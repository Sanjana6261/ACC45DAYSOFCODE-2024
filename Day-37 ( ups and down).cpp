#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A, A + N);
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                cout << A[i / 2] << " ";
            } else {
                cout << A[N - i / 2 - 1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
