
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K; // Number of boxes and maximum weight Chef can carry
        vector<int> weights(N);
        bool impossible = false;

        for (int i = 0; i < N; i++) {
            cin >> weights[i];
            if (weights[i] > K) {
                impossible = true; // If a single box is heavier than K, it's impossible
            }
        }

        if (impossible) {
            cout << -1 << endl;
            continue;
        }

        int trips = 0, currentWeight = 0;

        for (int i = 0; i < N; i++) {
            if (currentWeight + weights[i] <= K) {
                currentWeight += weights[i]; // Add the current box to this trip
            } else {
                trips++;          // Finish the current trip
                currentWeight = weights[i]; // Start a new trip with the current box
            }
        }

        if (currentWeight > 0) {
            trips++; // Count the last trip if there's remaining weight
        }

        cout << trips << endl;
    }

    return 0;
}
