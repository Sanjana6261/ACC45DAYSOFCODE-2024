#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if(Z > (X*Y)/2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
