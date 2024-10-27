#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y; 
    int time1 = Y / 2;

    int time2 = X - Y;

    
    int total_time = time1 + time2;

    cout << total_time << endl; 

    return 0;
}

