
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;

        // Calculate the total sticks Chef ate
        int extraSticks = R / 30; // Each extra stick earns Chef 30 rupees
        int totalSticks = X + extraSticks;

        // Calculate the maximum number of plates Chef could have ordered
        int plates = (totalSticks + Y - 1) / Y; // Ceiling division

        cout << plates << endl;
    }

    return 0;
}
