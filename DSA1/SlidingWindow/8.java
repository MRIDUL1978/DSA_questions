class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;
        int sum = 0, totalSum = 0, minSum = Integer.MAX_VALUE;
        int left = 0, right = 0;


        while(right < n) {
            totalSum += cardPoints[right];
            sum += cardPoints[right];
            while((right - left + 1) > n-k) {
                sum -= cardPoints[left];
                left++;
            }
            if((right - left + 1) == n-k) minSum = Math.min(minSum, sum); 
            right++;
        }

        return totalSum - minSum;
    }
}
