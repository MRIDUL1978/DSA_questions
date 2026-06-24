class minHeap {

    // Constructor
    
    ArrayList<Integer> arr;
    
    public minHeap() {
        arr = new ArrayList<>();
    }
        
    public int parent (int i) {
        return (i-1)/2;
    }
        
    public int left (int i) {
        return 2*i + 1;
    }
        
    public int right(int i) {
        return 2*i + 2;
    }
        
    public void Heapify(int index) {
        int li = left(index);
        int ri = right(index);
        int smallest = index;
            
        if(li < arr.size() && arr.get(li) < arr.get(smallest)) smallest = li;
        if(ri < arr.size() && arr.get(ri) < arr.get(smallest)) smallest = ri;
        if(smallest != index) {
            int temp = arr.get(index);
            arr.set(index , arr.get(smallest));
            arr.set(smallest , temp);
            Heapify(smallest);
        }
    }

    public void push(int x) {
        // Insert x into the heap
        arr.add(x);
        int k = arr.size()-1;
        
        while(k > 0 && arr.get(parent(k)) > arr.get(k)) {
            int temp = arr.get(parent(k));
            arr.set(parent(k) , arr.get(k));
            arr.set(k , temp);
            k = parent(k);
        }  
    }

    public void pop() {
        // Remove the top (minimum) element
        if(arr.size() <= 0) return;
        if(arr.size() == 1) {
            arr.remove(arr.size()-1);
            return;
        }
        
        arr.set(0,arr.get(arr.size()-1));
        arr.remove(arr.size()-1);
        Heapify(0);
    }

    public int peek() {
        // Return the top element or -1 if empty
        return arr.isEmpty() ? -1 : arr.get(0);
        
    }

    public int size() {
        // Return the number of elements in the heap
        return arr.size();
        
    }
}
