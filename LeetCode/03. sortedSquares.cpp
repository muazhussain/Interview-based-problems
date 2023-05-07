// Problem link: https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size);
        int startIdx = 0;
        int endIdx = nums.size() - 1;
        int curIdx = size - 1;
        while(startIdx <= endIdx) {
            int smallValue = (abs(nums[startIdx]) >= abs(nums[endIdx])) ? nums[startIdx++] : nums[endIdx--];
            ans[curIdx--] = smallValue * smallValue;
        }
        return ans;
    }
};

// Time complexity: O(n)
// Space complexity: O(1)
