// Problem link: https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) { 
        long long maxEl = arr[n - 1];
        int start = 0, end = n - 1;
        for(int i = 0; i < n; i++) {
            if(i & 1) {
                arr[i] += (arr[start++] % (maxEl + 1)) * (maxEl + 1);
            } else {
                arr[i] += (arr[end--] % (maxEl + 1)) * (maxEl + 1);
            }
        }
        for(int i = 0; i < n; i++) {
            arr[i] /= (maxEl + 1);
        }
    }
};
