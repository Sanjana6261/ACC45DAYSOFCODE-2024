#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
    int N;
    cin >> N;
    int arr[10] = {0};
    for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    arr[x - 1]++;
    }
     int max = 0, ans;
    for (int i = 0; i < 10; i++) {
          if (arr[i] > max) {
                max = arr[i];
              ans = i + 1;
            }
        }
        bool flag = false;
        for (int i = 0; i < 10; i++) {
            if (arr[i] == max && i + 1 != ans) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "CONFUSED" << endl;
        } else {
            cout << ans << endl;
}
    }
    return 0;
}

