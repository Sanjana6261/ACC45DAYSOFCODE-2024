#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A, B; // Max candies Limak and Bob can eat
        cin >> A >> B;

        int turn = 1; // Start with turn 1
        int limakCandies = 0, bobCandies = 0;

        while (true) {
            if (turn % 2 != 0) { // Limak's turn
                limakCandies += turn;
                if (limakCandies > A) { // Limak can't eat this many candies
                    cout << "Bob" << endl;
                    break;
                }
            } else { // Bob's turn
                bobCandies += turn;
                if (bobCandies > B) { // Bob can't eat this many candies
                    cout << "Limak" << endl;
                    break;
                }
            }
            turn++;
        }
    }

    return 0;
}
