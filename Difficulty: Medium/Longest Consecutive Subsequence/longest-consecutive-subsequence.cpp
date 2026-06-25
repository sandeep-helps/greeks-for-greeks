class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int>st(arr.begin(), arr.end());
        int ans = 0;
        
        for(int num : st){
            if(st.find(num - 1) == st.end());
            int count = 1;
            int curr = num;
            while(st.find(curr+1) != st.end()){
                curr++;
                count++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};