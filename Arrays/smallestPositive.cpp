// Problem link: https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1

class Solution {   
public:
    long long smallestpositive(vector<long long> array, int n) { 
        long long curSum = 0;
        sort(array.begin(), array.end());
        for(long long e : array) {
            if(e > curSum + 1) {
                return curSum + 1;
            }
            curSum += e;
        }
        return curSum + 1;
    } 
};

// Time complexity: O(n)
// Space complexity: O(1)
