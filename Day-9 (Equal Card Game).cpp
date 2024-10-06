
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int K;
        cin >> K;
        int remainder = 52 % K;
        cout << remainder << endl;
    }
    return 0;
}
