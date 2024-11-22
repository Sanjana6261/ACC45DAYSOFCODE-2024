#include <iostream>
using namespace std;

// Function to count even and odd divisors
void countEvenOddDivisors(int N) {
    int evenCount = 0, oddCount = 0;
    
    // Iterate over all numbers from 1 to N to find divisors
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) { // i is a divisor of N
            if (i % 2 == 0) {
                evenCount++;  // It's an even divisor
            } else {
                oddCount++;   // It's an odd divisor
            }
        }
    }
    
    // Compare even and odd divisors and print the result
    if (evenCount > oddCount) {
        cout << 1 << endl;
    } else if (evenCount == oddCount) {
        cout << 0 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        countEvenOddDivisors(N);
    }
    
    return 0;
}
