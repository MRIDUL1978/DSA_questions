class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }

    private int atMost(int[] nums, int k) {
        int n = nums.length;
        int cnt = 0;
        int oddCnt = 0;
        int num = 0;
        int left = 0, right = 0;

        while(right < n) {
            if(nums[right] % 2 == 1) oddCnt++;
            while(oddCnt > k) {
                if(nums[left] % 2 == 1) oddCnt--;
                left++;
            }
            cnt += right - left + 1;
            right++;
        }
        return cnt;
    }
}
