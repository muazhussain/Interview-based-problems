// Problem link: https://leetcode.com/problems/sort-colors/description/
// Datch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                ++low;
                ++mid;
            } else if(nums[mid] == 1) {
                ++mid;
            } else {
                swap(nums[mid], nums[high]);
                --high;
            }
        }
    }
};

Time complexity: O(n)
Space complexity: O(1)
