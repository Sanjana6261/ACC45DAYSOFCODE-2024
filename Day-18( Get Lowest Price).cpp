
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int A, B, C;
        cin >> A >> B >> C;
        int sum = A + B + C;
        int minVal = min(A, min(B, C));
        cout << sum - minVal << endl;
    }
    return 0;
}
