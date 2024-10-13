#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int freq[11] = {0};
        for (int i = 0; i < N; i++) {
            int A;
            cin >> A;
            freq[A]++;
        }
        int maxFreq = 0;
        for (int i = 1; i <= 10; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }
        cout << N - maxFreq << endl;
    }
    return 0;
}

