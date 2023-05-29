// Problem link: https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
	vector<int> res;
	int idx1 = 0, idx2 = 0;
	while(idx1 < n && idx2 < m) {
		if(arr1[idx1] < arr2[idx2]) {
			++idx1;
		} else if(arr1[idx1] > arr2[idx2]) {
			++idx2;
		} else {
			res.push_back(arr1[idx1]);
			++idx1;
			++idx2;
		}
	}
	return res;
}

// Time complexity: O(m + n)
