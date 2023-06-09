// Problem link: https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
        long long lSum = 0;
        for(int i = 0; i < n; i++) {
            sum -= a[i];
            if(lSum == sum) {
                return i + 1;
            }
            lSum += a[i];
        }
        return -1;
    }
};
