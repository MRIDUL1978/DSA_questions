class Solution {
    public int findKthLargest(int[] nums, int k) {
        int n = nums.length;
        int[] arr = nums;
        int heapSize = n;
        for(int i=n/2-1; i>=0; i--) {
            Heapify(arr,i,heapSize);
        }
        
        while(k > 1) {
            int temp = arr[0];
            arr[0] = arr[heapSize-1];
            arr[heapSize-1] = temp;

            heapSize--;
            Heapify(arr,0,heapSize);
            k--;
        }
        

        return arr[0];
    }

    public void Heapify(int[] arr, int index,int heapSize) {
        int li = 2*index + 1;
        int ri = 2*index + 2;
        int greatest = index;

        if(li < heapSize && arr[li] > arr[greatest]) greatest = li;
        if(ri < heapSize && arr[ri] > arr[greatest]) greatest = ri;
        if(greatest != index) {
            int temp = arr[index];
            arr[index] = arr[greatest];
            arr[greatest] = temp;
            Heapify(arr,greatest,heapSize);
        }
    }
}
