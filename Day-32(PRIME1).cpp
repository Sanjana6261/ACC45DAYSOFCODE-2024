#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1)return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        for (int i = m; i <= n; i++) {
            if (isPrime(i)) cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}
