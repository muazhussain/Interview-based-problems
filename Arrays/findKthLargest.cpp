// Problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:

    int partition(vector<int>& ar, int low, int high) {
        int pivot = ar[high];
        int i = low;
        for(int j = low; j < high; ++j) {
            if(ar[j] < pivot) {
                swap(ar[j], ar[i]);
                ++i;
            }
        }
        swap(ar[i], ar[high]);
        return i;        
    }

    int findKthLargest(vector<int>& ar, int k) {
        k = ar.size() - k;
        int low = 0, high = ar.size() - 1;
        while(low <= high) {
            int p = partition(ar, low, high);
            if(p == k) {
                break;
            } else if(p > k) {
                high = p - 1;
            } else {
                low = p + 1;
            }
        }
        return ar[k];
    }
};
