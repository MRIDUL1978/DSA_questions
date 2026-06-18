class Solution {
    public int characterReplacement(String s, int k) {
        int n = s.length();
        int maxlen = 0;
        int left = 0, right = 0;
        int[] freq = new int[26];
        int maxFreq = 0;
        while(right < n) {
            freq[s.charAt(right) - 'A']++;
            maxFreq = Math.max(maxFreq, freq[s.charAt(right) - 'A']);

            while((right-left+1) - maxFreq > k) {
                freq[s.charAt(left)-'A']--;
                left++;
            }
            maxlen = Math.max(maxlen, right-left+1);
            right++;
        }
        return maxlen;
    }
}
