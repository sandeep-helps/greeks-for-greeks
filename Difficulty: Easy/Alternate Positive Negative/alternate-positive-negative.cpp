class Solution {
  public:
    void rearrange(vector<int> &nums) {
        vector<int> pos, neg;
        for (int x : nums) {
            if (x < 0) neg.push_back(x);
            else       pos.push_back(x);
        }

        vector<int> ans;
        int i = 0, j = 0;
        bool takePos = true; // start with positive (matches expected)

        while (i < pos.size() && j < neg.size()) {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        // append leftovers
        while (i < pos.size()) ans.push_back(pos[i++]);
        while (j < neg.size()) ans.push_back(neg[j++]);

        nums = ans;
    }
};