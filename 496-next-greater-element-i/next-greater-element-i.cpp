class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> ans;   
        
        for(int num : nums2){

            while(!st.empty() && num > st.top()){
                ans[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        
        
        while(!st.empty()){
            ans[st.top()] = -1;
            st.pop();
        }
        
        
        vector<int> temp;
        for(int x : nums1){
            temp.push_back(ans[x]);
        }
        
        return temp;
    }
};
