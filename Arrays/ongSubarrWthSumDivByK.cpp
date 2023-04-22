// Problem link: https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1

class Solution {
    public:	
    	int longSubarrWthSumDivByK(int arr[], int n, int k) {
    	    map<int, int> m;
    	    m[0] = -1;
    	    int sum = 0, res = 0;
    	    for(int i = 0; i < n; i++) {
    	        sum += arr[i];
    	        int rem = sum % k;
    	        if(rem < 0) {
    	            rem += k;
    	        }
    	        if(m.find(rem) != m.end()) {
    	            res = max(res, i - m[rem]);
    	        } else {
    	            m[rem] = i;
    	        }
    	    }
    	    return res;
    	}
};
