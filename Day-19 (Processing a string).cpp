#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string S;
        cin >> S;
        int sum = 0;
        for(char c : S) {
            if(isdigit(c)) {
                sum += c - '0';
            }
        }
        cout << sum << endl;
    }
    return 0;
}
