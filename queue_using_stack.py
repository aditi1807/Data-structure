class MyQueue {
    int size=101;
    int[] arr=new int[size];
    int front=-1;
    int rear=-1;
    public MyQueue() {
        
    }
    
    public void push(int x) {
        if(rear==size-1)
        return;
        if(rear==-1 && front==-1)
        {
            rear++;
            front++;
            arr[rear]=x;
        }
        else
        {
            rear++;
            arr[rear]=x;
        }
    }
    
    public int pop() {
        if(empty())
        return -1;
        if(front==rear && front!=-1)
        {
            int t=arr[front];
            front=-1;
            rear=-1;
            return t;
        }
        else{
            int t=arr[front];
            front++;
            return t;
        }
    }
    
    public int peek() {
        if(front==-1)
        return -1;
        else
        return arr[front];
    }
    
    public boolean empty() {
        if(front==-1 && rear==-1)
        return true;
        else
        return false;
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
