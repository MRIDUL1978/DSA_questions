class Solution {
    public int[] minToMaxHeap(int[] nums) {
        int n = nums.length;

        for(int i=n/2-1; i>=0; i--) Heapify(nums,i);
        return nums;
    }

    public void Heapify(int[] nums,int index) {
        int li = 2*index + 1;
        int ri = 2*index + 2;
        int greatest = index;

        if(li < nums.length && nums[li] > nums[greatest]) greatest = li;
        if(ri < nums.length && nums[ri] > nums[greatest]) greatest = ri;
        if(greatest != index) {
            int temp = nums[index];
            nums[index] = nums[greatest];
            nums[greatest] = temp;
            Heapify(nums, greatest);
        }
    }
}
