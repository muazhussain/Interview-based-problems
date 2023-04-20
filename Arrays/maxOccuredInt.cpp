// Problem link: https://practice.geeksforgeeks.org/problems/maximum-occured-integer4602/1

class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx) {
        vector<int> count(maxx + 2, 0);
        for(int i = 0; i < n; i++) {
            count[L[i]]++;
            count[R[i] + 1]--;
        }
        int res = 0;
        int curMax = count[0];
        for(int i = 1; i < count.size(); i++) {
            count[i] += count[i - 1];
            if(count[i] > curMax) {
                curMax = count[i];
                res = i;
            }
        }
        return res;
    }
};
