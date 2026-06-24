class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int st = 0;
        int end = arr.size()-1;
        while(st<end){
            int sum = arr[st]+arr[end];
            if(sum == target){
                return {st+1,end+1};
            }
            else if(sum < target){
                st++;
            }
            else{
                end --;
            }
        }
        return {-1, -1};
    }
};