class Solution {
public:
    bool dfs(int node , vector<vector<int>> &adj , vector<bool> &visited , vector<bool> &result){
        visited[node] = true;
        result[node] = true;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour , adj , visited , result)){
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
        vector<bool> visited(numCourses , false);
        vector<bool> result(numCourses , false);
        vector<vector<int>> adj(numCourses);
        for(auto p : prerequisites){
            int x = p[0];
            int y = p[1];
            adj[y].push_back(x);
        }
        bool found = true;
        for(int i = 0 ; i < numCourses ; i++){
            if(!visited[i]){
                if(dfs(i , adj , visited , result)){
                    found = false;
                    break;
                }
            }
        }
        return found;
    }
};