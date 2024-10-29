#include <bits/stdc++.h>
using namespace std;
int main() {

int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[2*N];
        for (int i = 0; i < 2*N; i++) {
            cin >> A[i];
        }
        sort(A, A + 2*N);
        int count = 0;
        for (int i = 0; i < 2*N; i++) {
            if (A[i] == A[i+1] && A[i] == A[i+2]) {
                cout << "No" << endl;
                break;
            } else {
                count++;
            }
        }
        if (count == 2*N) {
            cout << "Yes" << endl;
        }
    }
    return 0;
}

