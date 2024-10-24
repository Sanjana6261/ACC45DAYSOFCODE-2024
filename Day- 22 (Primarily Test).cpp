#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        if(N <= 1) {
            cout << "no" << endl;
        } else {
            bool flag = true;
            for(int i = 2; i * i <= N; i++) {
                if(N % i == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
