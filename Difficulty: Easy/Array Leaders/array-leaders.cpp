class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        
        vector<int>ans;
        int n = arr.size();
        int mx = INT_MIN;
        for(int i = n - 1; i>=0; i--){
            if(arr[i] >= mx){
                ans.push_back(arr[i]);
                mx = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};