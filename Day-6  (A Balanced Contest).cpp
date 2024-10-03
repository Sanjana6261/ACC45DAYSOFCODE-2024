#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, P;
        cin >> N >> P;
        int cakewalk = 0, hard = 0;
        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if(x >= P / 2) cakewalk++;
            if(x <= P / 10) hard++;
        }
        if(cakewalk == 1 && hard == 2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}

