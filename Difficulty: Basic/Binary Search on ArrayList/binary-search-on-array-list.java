class Solution {
    public static int binarySearchAL(ArrayList<Integer> list, int k) {
        int left = 0;
        int right = list.size() - 1;
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            
            if(list.get(mid) == k){
                return mid;
            }
            else if(list.get(mid) < k){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return -1;  // Not found
    }
}