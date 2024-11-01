#include <iostream>
#include <algorithm>
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
        int operations = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] < i + 1) {
                operations += i + 1 - A[i];
            } else if (A[i] > i + 1) {
                cout << "-1" << endl;
                goto next;
            }
        }
        cout << operations << endl;
next:
        ;
    }
    return 0;
}


