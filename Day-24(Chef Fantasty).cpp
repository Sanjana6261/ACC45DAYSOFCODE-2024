#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

    
        if (N < 2) {
            cout << 0 << endl; 
        } else {
            int choices = N * (N - 1);
            cout << choices << endl;
        }
    }

    return 0;
}
