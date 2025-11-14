class MinStack {
private:
    stack<int> st;      // original value stores kr rha hai 
    stack<int> mins;    //  minimums value stores kar rha hai 

public:
    MinStack() {}
   //min empty hai ya fir min ki value origianl value se choti hai tho push in mins
    void push(int val) {
        st.push(val);
        if (mins.empty() || val <= mins.top()) 
        mins.push(val);
    }
    // 
    void pop() {
        if (st.empty()) 
        return;
        int topVal = st.top(); //store top elemnt of original stack taki hum min k top se compare kr ske
        st.pop();
        if (!mins.empty() && topVal == mins.top()) 
        mins.pop();
    }

    int top() {
        return st.empty() ? -1 : st.top(); 
    }

    int getMin() {
        return mins.empty() ? -1 : mins.top();
    }
};
