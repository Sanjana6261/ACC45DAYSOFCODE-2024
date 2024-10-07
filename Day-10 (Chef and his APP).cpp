#include <bits/stdc++.h>
using namespace std;

int main() {
     int T;

	cin >> T;
    while(T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;
        int total_memory = X + Y + Z;
        if(total_memory <= S) {
            cout << 0 << endl;
        } else if(total_memory - X <= S || total_memory - Y <= S) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}



