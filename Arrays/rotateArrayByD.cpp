// Problem link: https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        d %= n;
        reverse(arr, arr + d);
        reverse(arr + d, arr + n);
        reverse(arr, arr + n);
    }
};
