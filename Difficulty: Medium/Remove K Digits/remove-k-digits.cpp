class Solution {
  public:
    string removeKdig(string &s, int k) {
        int n = s.length();
        string result = "";
        if(n == k) return "0";
        for(char digit : s){
            while(!result.empty() && k > 0 && result.back() > digit){
                result.pop_back();
                k--;
            }
            if(!result.empty() || digit != '0'){
                result.push_back(digit);
            }
        }
        while(k > 0 && !result.empty()){
            result.pop_back();
            k--;
        }
        return result.empty() ? "0" : result;
    }
};