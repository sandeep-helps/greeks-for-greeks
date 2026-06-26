class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        int n = arr.size();
        
        k = k % n;
        vector<int>result(n);
        
        for(int i = 0; i<n; i++){
            result[(i+k) % n] = arr[i];
        }
        
        arr = result;
        
    }
};
