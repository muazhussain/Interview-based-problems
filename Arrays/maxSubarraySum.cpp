// Problem link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution {
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
        long long curMax = arr[0], res = arr[0];
        for(int i = 1; i < n; i++) {
            curMax = max(curMax + arr[i], arr[i] * 1LL);
            res = max(res, curMax);
        }
        return res;
    }
};
