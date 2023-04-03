class MyQueue {
public:
    vector<int> primary_stack;
    vector<int> temporary_stack;

    MyQueue() {
        
    }
    
    void push(int x) {
        while (primary_stack.size()) {
            temporary_stack.push_back(primary_stack.back());
            primary_stack.pop_back();
        }

        primary_stack.push_back(x);

        while (temporary_stack.size()) {
            primary_stack.push_back(temporary_stack.back());
            temporary_stack.pop_back();
        }
    }
    
    int pop() {
        int ans = primary_stack.back();
        primary_stack.pop_back();
        return ans;
    }
    
    int peek() {
        return primary_stack.back();
    }
    
    bool empty() {
        return primary_stack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 