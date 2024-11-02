#include <iostream>
#include <string>
using namespace std;

bool canErase(string s) {
    int count[26] = {0};
    for (char c : s) {
        count[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        if (canErase(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
