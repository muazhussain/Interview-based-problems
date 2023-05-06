// Problem link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup;
        for(int i = 0; i < nums.size(); i++) {
            int other = target - nums[i];
            if(lookup.find(other) != lookup.end()) {
                return {lookup[other], i};
                break;
            } else {
                lookup[nums[i]] = i;
            }
        }
        return {-1, -1};
    }
};

// Time complexity: O(n)
// Space complexity: O(n)
