// Longest Substring Without Repeating characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0;
        int len = 0;
        int left = 0;
        int right = 0;
        int hash[256] = {0};    
        while(right < n) {
            while(hash[s[right]] == 1) {
                hash[s[left]] = 0;
                left++;
            }
            hash[s[right]] = 1;
            len = right - left + 1;
            maxlen = max(maxlen, len);
            right++;
        }
        return maxlen;
    }
};
