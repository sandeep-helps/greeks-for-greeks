class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int fib1 = nthFibonacci(n - 1);
        int fib2 = nthFibonacci(n - 2);
        return fib1 + fib2;
    }
};