// Problem link: https://practice.geeksforgeeks.org/problems/peak-element/1

class Solution {
    public:
        /* The function should return the index of any
        peak element present in the array */
        // arr: input array
        // n: size of array
        int peakElement(int arr[], int n) {
            int low = 0, high = n - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
                    return mid;
                } else if(mid > 0 && arr[mid - 1] >= arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            return -1;
        }
};
