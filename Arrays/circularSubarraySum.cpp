// Problem link: https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1

class Solution {
    public:
    // arr: input array
    // num: size of array
    
    //Function to find maximum subarray sum.
    int kadane(int arr[], int num) {
        int curMax = arr[0], res = arr[0];
        for(int i = 1; i < num; i++) {
            curMax = max(curMax + arr[i], arr[i]);
            res = max(res, curMax);
        }
        return res;
    }
    
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num) {
        int norSubSum = kadane(arr, num);
        if(norSubSum < 0) {
            return norSubSum;
        }
        int sum = 0;
        for(int i = 0; i < num; i++) {
            sum += arr[i];
            arr[i] = -arr[i];
        }
        // Find minimum subarray sum.
        int minSubSum = kadane(arr, num);
        
        int cirSubSum = sum + minSubSum;
        return max(norSubSum, cirSubSum);
    }
};
