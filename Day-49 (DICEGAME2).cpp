#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A[3], B[3];
       
        for (int i = 0; i < 3; i++) cin >> A[i];
        for (int i = 0; i < 3; i++) cin >> B[i];

    
        sort(A, A + 3);
        sort(B, B + 3);

        
        int scoreAlice = A[1] + A[2];
        int scoreBob = B[1] + B[2];

        
        if (scoreAlice > scoreBob) {
            cout << "Alice" << endl;
        } else if (scoreAlice < scoreBob) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
