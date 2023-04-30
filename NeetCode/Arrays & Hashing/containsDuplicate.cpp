class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> mark;
        if(nums.size() <= 1) {
            return false;
        }
        mark[nums[0]] = true;
        for(int i = 1; i < nums.size(); i++) {
            if(mark[nums[i]] == true) {
                return true;
            }
            mark[nums[i]] = true;
        }
        return false;
    }
};

/*
	Time complexity: O(n)
	Space complexity: O(n)
	
	Explanation: Iterate through every element and determine whether the current element already present in the array using lookup table (map / set).
*/
