#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, A;
        cin >> N >> A;
        int min_people = A < N-A ? A : N-A;
        cout << min_people << endl;
    }
    return 0;
}
