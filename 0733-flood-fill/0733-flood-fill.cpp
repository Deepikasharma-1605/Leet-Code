class Solution {
public:
    void dfs(int i , int j , vector<vector<int>>& image, int old , int newc){
        int n = image.size();
        int m = image[0].size();
        if(i >= n || j >= m || i < 0 || j < 0 || image[i][j] != old || image[i][j] == newc){
            return;
        }
        image[i][j] = newc;
        dfs(i-1 , j , image , old , newc);
        dfs(i , j-1 , image , old , newc);
        dfs(i+1 , j , image , old , newc);
        dfs(i , j+1 , image , old , newc);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(sr, sc , image , image[sr][sc] , color);
        return image;
        
    }
};