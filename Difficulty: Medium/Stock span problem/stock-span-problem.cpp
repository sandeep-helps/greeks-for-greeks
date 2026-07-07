class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int price : arr){
            int span = 1;
            while(!st.empty() && st.top().first <= price){
                span += st.top().second;
                st.pop();
            }
            st.push({price, span});
            ans.push_back(span);
        }
        return ans;
    }
};