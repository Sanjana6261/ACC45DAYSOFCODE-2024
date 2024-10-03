class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> rows(numRows);
        int row = 0, step = -1;
        for (char c : s) {
            rows[row] += c;
            if (row == 0 || row == numRows - 1) step = -step;
            row += step;
        }
        string res;
        for (string row : rows) res += row;
        return res;
    }
};

