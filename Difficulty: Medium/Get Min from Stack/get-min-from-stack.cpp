class SpecialStack {
public:
    stack<pair<int,int>> st;
    
    SpecialStack() {
        // Stack is already empty by default, no need to do anything
    }

    void push(int val) {
        if(st.empty()) {
            st.push({val, val});
        } else {
            int minval = min(val, st.top().second);
            st.push({val, minval});
        }
    }

    void pop() {
        if(!st.empty()) {  // ✅ Check before popping
            st.pop();
        }
    }

    int peek() {
        if(!st.empty()) {  // ✅ Check before accessing
            return st.top().first;
        }
        return -1;  // Or throw an exception
    }

    bool isEmpty() {
        return st.empty();  // ✅ Simplified
    }

    int getMin() {
        if(!st.empty()) {  // ✅ Check before accessing
            return st.top().second;
        }
        return -1;  // Or throw an exception
    }
};