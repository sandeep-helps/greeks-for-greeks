class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int n = arr.size();
        if(n <=1) return arr;
        vector<vector<int>>result;
        sort(arr.begin(), arr.end());
        result.push_back(arr[0]);
        for(int i = 1; i<n; i++){
            vector<int>& last = result.back();
            if(arr[i][0] <= last[1]){
                last[1] = max(arr[i][1], last[1]);
            }
            else{
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};