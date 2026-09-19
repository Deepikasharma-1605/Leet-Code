class Solution {
public:
    void dfs(int node , vector<vector<int>>& isConnected , vector<bool> &visited){
        visited[node] = true;
        for(int i = 0 ; i < isConnected.size() ; i++){
            if(!visited[i] && isConnected[i][node] == 1){
                dfs(i , isConnected , visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<bool> visited(n , false);
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                dfs(i , isConnected , visited);
                count++;
            }
        }
        return count;
    }
};