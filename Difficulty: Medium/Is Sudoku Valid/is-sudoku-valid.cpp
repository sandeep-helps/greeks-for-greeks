class Solution {
  public:
    bool isValid(vector<vector<int>>& mat) {
        unordered_set<string>st;
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                if(mat[i][j] == 0) continue;
                
                string row = to_string(mat[i][j]) + "row" + to_string(i);
                string col = to_string(mat[i][j]) + "col" + to_string(j);
                string box = to_string(mat[i][j]) + "box" + to_string(i/3) + to_string(j/3);
                
                if(st.find(row) != st.end() || 
                   st.find(col) != st.end() || 
                   st.find(box) != st.end()) {
                    return false;
                }
            
                st.insert(row);
                st.insert(col);
                st.insert(box);
            }
        }
        return true;
    }
};