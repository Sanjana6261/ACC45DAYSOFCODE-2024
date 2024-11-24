#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 4 == 0) {
        N += 1;  // Increment if divisible by 4
    } else {
        N -= 1;  // Decrement otherwise
    }

    cout << N << endl;
    return 0;
}
