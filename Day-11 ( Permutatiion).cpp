class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>> ans;
        backtrack(nums, 0, nums.size(), ans);
        return ans;
    }

    void backtrack(vector<int>& nums, int start, int end, vector<vector<int>>& ans) {
        if (start == end) {
            ans.push_back(nums);
        } else {
            for (int i = start; i < end; i++) {
                swap(nums[start], nums[i]);
                backtrack(nums, start + 1, end, ans);
                swap(nums[start], nums[i]);
            }
        }
   
    }
};
