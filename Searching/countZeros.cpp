// Problem link: https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1

class Solution {   
    public:
        int countZeroes(int arr[], int n) {
            int low = 0, high = n - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                if(arr[mid] == 0) {
                    if(mid == 0 || arr[mid - 1] == 1) {
                        return n - mid;
                    } else {
                        high = mid - 1;
                    }
                } else {
                    low = mid + 1;
                }
            }
            return 0;
        }
};
