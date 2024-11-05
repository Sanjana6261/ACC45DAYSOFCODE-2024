
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> A[i][j];
            }
        }
        int max_trace = 0;
        for (int l = 1; l <= N; l++) {
            for (int r = 0; r <= N - l; r++) {
                for (int c = 0; c <= N - l; c++) {
                    int trace = 0;
                    for (int i = 0; i < l; i++) {
                        trace += A[r + i][c + i];
                    }
                    max_trace = max(max_trace, trace);
                }
            }
        }
        cout << max_trace << endl;
    }
    return 0;
}

