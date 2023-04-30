class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for(char ch : s) {
            count[ch]++;
        }
        for(char ch : t) {
            count[ch]--;
        }
        bool res = true;
        for(auto p : count) {
            res &= (p.second == 0);
        }
        return res;
    }
};

/*
	Time complexity: O(n)
	Space complexity: O(n)
	
	Explanation: Count the frequency of each character in both strings. If the frequency of each character is equal, then it's an anagram; otherwise, it's not.
*/
