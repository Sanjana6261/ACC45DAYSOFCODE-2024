#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}