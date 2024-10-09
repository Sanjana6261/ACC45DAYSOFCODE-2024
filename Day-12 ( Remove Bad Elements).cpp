#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++) cin >> arr[i];
        sort(arr, arr+N);
        int maxCount = 1, count = 1;
        for(int i = 1; i < N; i++) {
            if(arr[i] == arr[i-1]) count++;
            else {
                maxCount = max(maxCount, count);
                count = 1;
            }
        }
        maxCount = max(maxCount, count);
        cout << N - maxCount << endl;
    }
    return 0;
}

