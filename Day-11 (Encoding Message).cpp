#include <iostream>
#include <string>
using namespace std;

string encodeMessage(string s) {
    int n = s.length();
    for (int i = 0; i < n - 1; i += 2) {
        swap(s[i], s[i + 1]);
    }
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            s[i] = 'a' + ('z' - c);
        }
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << encodeMessage(S) << endl;
    }
    return 0;
}
