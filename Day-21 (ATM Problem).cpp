#include <iostream>
using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        for(int i = 0; i < N; i++) {
            int A;
            cin >> A;
            if(K >= A) {
                cout << 1;
                K -= A;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}



