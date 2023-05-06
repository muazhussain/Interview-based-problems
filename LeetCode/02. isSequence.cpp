// Problem link: https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lenS = s.size(), lenT = t.size();
        int i = 0, j = 0;
        while(i < lenS && j < lenT) {
            // character matched
            if(s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        // Returns true if it reaches the end of the subsequence, false otherwise.
        return i == lenS;
    }
};

// Time complexity: O(n)
// Space complexity: O(1)
