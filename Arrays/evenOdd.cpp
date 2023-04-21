// Problem link: https://takeuforward.org/data-structure/longest-even-odd-subarray/

class Solution {
	public:
	// Longest Subarray Of Evens And Odds
	int evenOdd(vector<int>& ar) {
		int count = 1, res = 1;
		for(int i = 1; i < ar.size(); i++) {
			if((ar[i] & 1) ^ (ar[i - 1] & 1)) {
				count++;
				res = max(res, count);
			} else {
				count = 1;
			}
		}
		return res;
	}
};
