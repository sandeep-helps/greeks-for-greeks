class Solution {
  public:
    vector<int> evenOddSum(vector<int>& arr) {
        int evenSum = 0;
        int oddSum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            if((i + 1) % 2 == 0) {
                evenSum += arr[i];
            } else {
                oddSum += arr[i];
            }
        }
        
        return {evenSum, oddSum};
    }
};