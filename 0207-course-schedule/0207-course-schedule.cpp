class Solution {
public:
    bool dfs(vector<bool> &result , vector<bool> &visited , vector<vector<int>> &adj , int node){
        visited[node] = true;
        result[node] = true;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(result , visited , adj , neighbour)){
                    return true;
                }
            }else if(result[neighbour]){
                return true;
            }
        }
        result[node] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>> adj(n);
        for(auto p : prerequisites){
            int x = p[0];
            int y = p[1];
            adj[y].push_back(x);
        }
        vector<bool> visited(n , false);
        vector<bool> result(n , false);
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                if(dfs(result , visited , adj , i)){
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};