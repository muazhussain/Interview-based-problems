// Problem link: https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1
// Similar: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution{
    public:
        int findMin(int arr[], int n) { 
            int low = 0, high = n - 1;
            while(low < high) {
                int mid = low + (high - low) / 2;
                if(arr[mid] > arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            return arr[low];
        }
};
