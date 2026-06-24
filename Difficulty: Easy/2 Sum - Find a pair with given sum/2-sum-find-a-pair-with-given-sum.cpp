class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // code here
        unordered_map<int,int>map;
        
        for(int i = 0; i<arr.size(); i++){
            int complement = target - arr[i];
            if(map.find(complement) != map.end()){
                return {complement, arr[i]};
            }
            map[arr[i]] = i;
        }
        return {};
    }
};