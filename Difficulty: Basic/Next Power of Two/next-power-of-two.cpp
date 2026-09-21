class Solution {
  public:
    int nextPowerOfTwo(int n) {
        // code here
        if(n <= 1) return 1;
        if((n & (n -1)) == 0) return n;
        return 2 * nextPowerOfTwo((n+1) / 2);
    }
};