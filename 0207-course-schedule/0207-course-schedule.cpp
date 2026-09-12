class Solution {
public:
    bool dfs(int node ,int numCourses, vector<vector<int>>& adj , vector<bool> &visited , vector<bool> &result){
        
        visited[node] = true;
        result[node] = true;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour , numCourses , adj , visited , result)){
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
        vector<vector<int>> adj(numCourses);
        for(auto p : prerequisites){
            int course = p[0];
            int pre = p[1];
            adj[pre].push_back(course);
        }
        vector<bool> visited(numCourses , false);
        vector<bool> result(numCourses , false);
        for(int i = 0 ; i < numCourses ; i++){
            if(!visited[i]){
                if(dfs(i , numCourses , adj , visited , result)){
                    return false;
                }
            }
        }
        return true;
    }
};