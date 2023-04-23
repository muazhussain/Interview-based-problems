// Problem link: https://practice.geeksforgeeks.org/problems/square-root/1

class Solution{
    public:
        // Function to find square root
        // x: element to find square root
        long long int floorSqrt(long long int x) {
            long long low = 0, high = x, ans = 0;
            while(low <= high) {
                long long mid = (low + high) / 2;
                if(mid * mid <= x) {
                    low = mid + 1;
                    ans = mid;
                } else {
                    high = mid - 1;
                }
            }
            return ans;
        }
};
