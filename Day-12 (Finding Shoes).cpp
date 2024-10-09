#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        int extraShoes = max(N - M, 0) + N; 
        cout << extraShoes << endl;
    }
    return 0;
}

