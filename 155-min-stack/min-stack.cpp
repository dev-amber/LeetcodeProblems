class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minstack;

public:
    MinStack() {}

    void push(int val) {
        stack.push(val);

        if (minstack.empty() || val <= minstack.top()) {
            minstack.push(val);
        }
    }

    void pop() {
        int popedValue = stack.top();
        stack.pop();

        if (popedValue == minstack.top()) {
            minstack.pop();
        }
    }

    int top() { return stack.top(); }

    int getMin() { return minstack.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */