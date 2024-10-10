#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;
        if((float)Y / X >= 0.5) 
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }
    return 0;
}

