class Solution {
public:
    void rotateArr(vector<int>& nums, int k) {
         int n = nums.size();
        k = k % n;  // IMPORTANT: handle large k
        vector<int> result(n);
        // Rotate right by k positions
        for(int i = 0; i < n; i++) {
            result[i] = nums[(i+k)%n];
        }
        // Assign back to original array
        nums = result;
    }
};
