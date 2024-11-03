#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int P1 = 0, P2 = 0, lead = 0, maxLead = 0, winner = 1;
    for (int i = 0; i < N; i++) {
        int S1, S2;
        cin >> S1 >> S2;
        P1 += S1;
        P2 += S2;
        if (P1 > P2) {
            lead = P1 - P2;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 1;
            }
        } else {
            lead = P2 - P1;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 2;
            }
        }
    }
    cout << winner << " " << maxLead << endl;
    return 0;
}


