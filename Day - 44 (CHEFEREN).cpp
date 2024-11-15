#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int oddCount = (n + 1) / 2;
        int evenCount = n - oddCount;
        int totalDuration = evenCount * a + oddCount * b;
        cout << totalDuration << endl;
    }
    return 0;
}

