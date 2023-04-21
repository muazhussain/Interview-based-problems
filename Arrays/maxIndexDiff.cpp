// Problem link: https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1

class Solution {
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) { 
        int lMin[N], rMax[N];
        lMin[0] = A[0];
        for(int i = 1; i < N; i++) {
            lMin[i] = min(lMin[i - 1], A[i]);
        }
        rMax[N - 1] = A[N - 1];
        for(int i = N - 2; i >= 0; i--) {
            rMax[i] = max(rMax[i + 1], A[i]);
        }
        int low = 0, high = 0, ans = 0;
        while(low < N && high < N) {
            if(lMin[low] <= rMax[high]) {
                ans = max(ans, high - low);
                high++;
            } else {
                low++;
            }
        }
        return ans;
    }
};
