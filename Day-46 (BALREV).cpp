#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Length of the binary string
        string A;
        cin >> N >> A;

        int count0 = 0, count1 = 0;

        // Count the number of 0s and 1s
        for (char c : A) {
            if (c == '0') count0++;
            else count1++;
        }

        // Construct the lexicographically smallest string
        string result(count0, '0'); // Append all 0s
        result += string(count1, '1'); // Append all 1s

        cout << result << endl;
    }

    return 0;
}
