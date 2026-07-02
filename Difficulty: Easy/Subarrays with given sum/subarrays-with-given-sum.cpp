class Solution {
  public:
    int subArraySum(vector<int>& arr, int k) {
        int count = 0;
        int presum = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int num : arr){
            presum += num;
            if(mp.find(presum -k ) != mp.end()){
                count += mp[presum -k];
                
            }
            mp[presum]++;
        }
        return count;
    }
};