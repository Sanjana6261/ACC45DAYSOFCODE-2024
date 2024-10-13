#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int notebooks = (N * 1000) / 100;
        cout << notebooks << endl;
    }
    return 0;
}

