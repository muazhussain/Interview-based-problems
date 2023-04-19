// Problem link: https://practice.geeksforgeeks.org/problems/second-largest3735/1

class Solution{
public:	
	// Function returns the second
	// largest elements
	// arr: given array
	// n: array size
	int print2largest(int arr[], int n) {
	    int maxElement = 0, secondMax = -1;
	    for(int i = 1; i < n; i++) {
	        if(arr[i] != arr[maxElement]) {
	            if(arr[i] > arr[maxElement]) {
	                secondMax = maxElement;
	                maxElement = i;
	            } else if(secondMax == -1 || arr[i] > arr[secondMax]) {
	                secondMax = i;
	            }
	        }
	    }
	    if(secondMax != -1) {
	        return arr[secondMax];
	    }
	    return -1;
	}
};
