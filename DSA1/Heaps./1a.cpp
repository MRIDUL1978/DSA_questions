class minHeap {

    // Constructor
    
    
    int capacity;
    static int size;
    static int[] arr;
    
    public minHeap() {
            capacity = 100;
            size = 0;
            arr = new int[capacity];
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
            
        if(li < size && arr[li] < arr[smallest]) smallest = li;
        if(ri < size && arr[ri] < arr[smallest]) smallest = ri;
        if(smallest != index) {
            int temp = arr[index];
            arr[index] = arr[smallest];
            arr[smallest] = temp;
            Heapify(smallest);
        }
    }

    public void push(int x) {
        // Insert x into the heap
        if(size == capacity) {
            System.out.println("Heap Overflow");
            return;
        }
        arr[size] = x;
        int k = size;
        size++;
        
        while(k != 0 && arr[parent(k)] > arr[k]) {
            int temp = arr[parent(k)];
            arr[parent(k)] = arr[k];
            arr[k] = temp;
            k = parent(k);
        }  
    }

    public void pop() {
        // Remove the top (minimum) element
        if(size <= 0) {
            return;
        }
        if(size == 1) {
            size--;
            return;
        }
        
        arr[0] = arr[size - 1];
        size--;
        Heapify(0);
    }

    public int peek() {
        // Return the top element or -1 if empty
        return (size > 0) ? arr[0] : -1;
    }

    public int size() {
        // Return the number of elements in the heap
        return size;
    }
}
