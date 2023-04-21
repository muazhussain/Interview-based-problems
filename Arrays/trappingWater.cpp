// Problem link: https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

class Solution {

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n) {
        int lMax[n], rMax[n];
        lMax[0] = arr[0];
        for(int i = 1; i < n; i++) {
            lMax[i] = max(lMax[i - 1], arr[i]);
        }
        rMax[n - 1] = arr[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            rMax[i] = max(rMax[i + 1], arr[i]);
        }
        long long ans = 0;
        for(int i = 1; i < n - 1; i++) {
            ans += (long long) min(lMax[i], rMax[i]) - arr[i];
        }
        return ans;
    }
};
