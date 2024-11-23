#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        vector<int> A(N); 
        vector<int> B(N); 
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        int mostPopularIndex = 0;
        for (int i = 1; i < N; i++) {
            if (A[i] > A[mostPopularIndex] || 
               (A[i] == A[mostPopularIndex] && B[i] > B[mostPopularIndex])) {
                mostPopularIndex = i;
            }
        }

        
        cout << (mostPopularIndex + 1) << endl;
    }

    return 0;
}
