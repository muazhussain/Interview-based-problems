https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n) {
        sort(arr, arr + n);
        sort(dep, dep + n);
        int arrIdx = 0, depIdx = 0;
        int res = 0, platNeeded = 0;
        while(arrIdx < n && depIdx < n) {
            if(arr[arrIdx] <= dep[depIdx]) {
                ++arrIdx;
                ++platNeeded;
            } else {
                ++depIdx;
                --platNeeded;
            }
            res = max(res, platNeeded);
        }
        return res;
    }
};

// Time complexity: O(n)
// Space complexity: O(n)
