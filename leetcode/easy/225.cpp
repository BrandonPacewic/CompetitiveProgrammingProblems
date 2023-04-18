class MyStack {
public:
    queue<int> primary;
    queue<int> temporary;

    MyStack() {
    }
    
    void push(int x) {
        primary.push(x);
    }
    
    int pop() {
        while (primary.size() > 1) {
            temporary.push(primary.front());
            primary.pop();
        }

        int ans = primary.front();
        primary.pop();

        while (temporary.size() > 0) {
            primary.push(temporary.front());
            temporary.pop();
        }

        return ans;
    }

    int top() {
        while (primary.size() > 1) {
            temporary.push(primary.front());
            primary.pop();
        }

        int ans = primary.front();
        temporary.push(ans);
        primary.pop();

        while (temporary.size() > 0) {
            primary.push(temporary.front());
            temporary.pop();
        }

        return ans;
    }
    
    bool empty() {
        return primary.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
 