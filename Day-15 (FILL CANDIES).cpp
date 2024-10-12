
#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;
        int bags = (N + M - 1) / M;
        int pockets = (bags + K - 1) / K;
        cout << pockets << endl;
    }
    return 0;
}
