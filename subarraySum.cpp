// Problem link: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution {
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s) {
        if(s == 0) {
            return {-1};
        }
        int low = 0, high = 0;
        long long curSum = 0;
        while(low < n && high <= n) {
            if(curSum < s) {
                curSum += arr[high];
                high++;
            } else if(curSum > s) {
                curSum -= arr[low];
                low++;
            } else {
                return {low + 1, high};
            }
        }
        return {-1};
    }
};
