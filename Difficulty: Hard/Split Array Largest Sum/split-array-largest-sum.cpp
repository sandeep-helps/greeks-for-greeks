#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int ispossible(vector<int>& nums, int mid) {
        int count = 1;
        int tempsum = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (tempsum + nums[i] <= mid) {
                tempsum += nums[i];
            } else {
                count++;
                tempsum = nums[i];
            }
        }
        return count;
    }
    
    int splitArray(vector<int>& arr, int k) {
        // Handle edge cases
        if (arr.empty()) return 0;
        if (k > arr.size()) return -1; // or handle as per problem requirements
        
        int left = *max_element(arr.begin(), arr.end());
        int right = 0;
        int ans = right;  // Initialize with maximum possible
        
        for (int x : arr) {
            right += x;
        }
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (ispossible(arr, mid) <= k) {
                ans = mid;  // Store the answer
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};