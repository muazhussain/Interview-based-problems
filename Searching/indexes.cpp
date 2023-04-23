// Problem link : https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1

class Solution {
    public:
        // function finds left most index of element x
        int leftMostIndex(vector<long long>& v, long long x) {
            int low = 0, high = v.size() - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                if(v[mid] < x) {
                    low = mid + 1;
                } else if(v[mid] > x) {
                    high = mid - 1;
                } else {
                    if(mid == 0 || v[mid - 1] != x) {
                        return mid;
                    } else {
                        high = mid - 1;
                    }
                }
            }
            return -1;
        }
        
        // function finds right most index of element x
        int rightMostIndex(vector<long long>& v, long long x) {
            int low = 0, high = v.size() - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                if(v[mid] < x) {
                    low = mid + 1;
                } else if(v[mid] > x) {
                    high = mid - 1;
                } else {
                    if(mid == v.size() - 1 || v[mid + 1] != x) {
                        return mid;
                    } else {
                        low = mid + 1;
                    }
                }
            }
            return -1;
        }
        
        pair<long,long> indexes(vector<long long> v, long long x) {
            int leftIdx = leftMostIndex(v, x);
            int rightIdx = rightMostIndex(v, x);
            return {leftIdx, rightIdx};
        }
};
