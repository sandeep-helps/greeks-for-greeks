class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int D) {
        
        int mincap = 0;
        int maxcap = 0;
        for(int x : arr){
            mincap = max(mincap, x);
            maxcap +=x;
        }
        while(mincap < maxcap){
            int mid = mincap + (maxcap - mincap)/2;
            int days = 1;
            int sum = 0;
            for(int weight : arr){
                if(weight + sum > mid){
                    days++;
                    sum = 0;
                }
                sum += weight;
            }
            
            if(days > D){
                mincap = mid +1;
            }
            else{
                maxcap = mid;
            }
            
        }
        
        return mincap;
    }
};