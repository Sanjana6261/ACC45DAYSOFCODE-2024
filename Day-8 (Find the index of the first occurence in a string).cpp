class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        int result = haystack.find(needle);
        if (result != -1) {
            cout << "Found needle at index " << result << endl;
        } else {
            cout << "Needle not found" << endl;
        }
        return result;
    }
};

