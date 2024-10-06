

#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;
        cout << (Y - 1) / X << endl; // This handles both scenarios
    }
    return 0;
}