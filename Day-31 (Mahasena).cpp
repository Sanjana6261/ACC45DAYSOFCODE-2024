#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int even = 0, odd = 0;
    for (int i = 0; i < N; i++) {
        int Ai;
        cin >> Ai;
        if (Ai % 2 == 0) even++;
        else odd++;
    }
    if (even > odd) cout << "READY FOR BATTLE";
    else cout << "NOT READY";
    return 0;
}
