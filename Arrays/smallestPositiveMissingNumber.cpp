// Problem link: https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) { 
        int smallestPositive = -1;
        for(int i = 0; i < n; i++) {
            int correctIdx = arr[i] - 1;
            while(correctIdx >= 0 && correctIdx < n && arr[i] != arr[correctIdx]) {
                swap(arr[i], arr[correctIdx]);
                correctIdx = arr[i] - 1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] != i + 1) {
                return i + 1;   
            }
        }
        return n + 1;
    } 
};
