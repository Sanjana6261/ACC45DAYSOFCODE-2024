#include <iostream>
using namespace std;

int main() {
    int R, O, C;
    cin >> R >> O >> C;
    int remainingOvers = 20 - O;
    int maxPossibleScore = C + remainingOvers * 36;
    if (maxPossibleScore > R) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

