#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        int cost = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            cost += (count(S.begin(), S.end(), c) + 1) / 2;
        }
        for (char c = 'A'; c <= 'Z'; c++) {
            cost += (count(S.begin(), S.end(), c) + 1) / 2;
        }
        cout << cost << endl;
    }
    return 0;
}


