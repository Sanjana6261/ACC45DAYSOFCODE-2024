#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;
        int totalWater = X;
        int waterPerPerson = 2 * Y;
        int people = totalWater / waterPerPerson;
        cout << people << endl;
    }
    return 0;
}


