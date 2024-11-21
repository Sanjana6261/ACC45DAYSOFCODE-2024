#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // Number of dolls in this test case
        cin >> N;
        
        int result = 0; // To store the XOR result
        for (int i = 0; i < N; i++) {
            int type;
            cin >> type;
            result ^= type; // XOR each doll type
        }
        
        // Output the missing doll type
        cout << result << endl;
    }
    
    return 0;
}
