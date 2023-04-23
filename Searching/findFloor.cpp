// Problem link: https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution {
    public:
        // Function to find floor of x
        // n: size of vector
        // x: element whose floor is to find
        int findFloor(vector<long long> v, long long n, long long x) {
            int low = 0, high = n - 1, res = -1;
            while(low <= high) {
                int mid = (low + high);
                if(v[mid] <= x) {
                    res = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return res;
        }
};
