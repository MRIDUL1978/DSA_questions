class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int len = 0;
        int maxlen = 0;
        int left = 0 , right = 0;
        int zerocnt = 0;
        while(right < n) {
            if(nums[right] == 0) {
                zerocnt++;
            }
            while(zerocnt > k) {
                if(nums[left] == 0) zerocnt--;
                left++;
            }
            len = right - left + 1;
            maxlen = max(maxlen,len);
            right++;
        }
        return maxlen;
    }
};
