#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;
        
        if (X % 5 != 0) {
            cout << -1 << endl; 
        } else {
            
            int tens = X / 10;
            X = X % 10;
            
            
            int fives = X / 5;
            
            cout << tens + fives << endl;  
        }
    }
    
    return 0;
}
