class Solution {
  public:
    int n , m;
    vector<vector<int>>directions = {{0,1},{1,0},{0,-1},{-1,0}};
    bool find(vector<vector<char>>&grid, int i , int j , int idx, string& word){
        if(idx == word.length()){
            return true;
        }
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '$'){
            return false;
        }
        if(grid[i][j] != word[idx]){
            return false;
        }
        char temp = grid[i][j];
        grid[i][j] = '$';
        for(auto& dir : directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            if(find(grid, new_i, new_j, idx+1, word)){
                return true;
            }
        }
        grid[i][j] = temp;
        return false;
    }
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        m = mat.size();
        n = mat[0].size();
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(mat[i][j] == word[0] && find(mat, i , j , 0 ,word)){
                    return true;
                }
            }
        }
        return false;
    }
};