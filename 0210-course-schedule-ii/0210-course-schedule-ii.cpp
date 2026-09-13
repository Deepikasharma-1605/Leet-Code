class Solution {
public:
    bool dfs(int node , vector<vector<int>> &adj , vector<bool> &visited , vector<bool> &result,  stack<int> &st){
        visited[node] = true;
        result[node] = true;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour , adj , visited, result ,st)){
                    return true;
                }
            }else if(result[neighbour]){
                return true;
            }
        }
        st.push(node);
        result[node] = false;
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        stack<int> st;
        vector<bool> visited(numCourses , false);
        vector<bool> result(numCourses , false);
        for(auto p : prerequisites){
            int x = p[0];
            int y = p[1];
            adj[y].push_back(x);
        }
        vector<int> ans;
        for(int i = 0 ; i < numCourses ; i++){
            if(!visited[i]){
                if(dfs(i , adj , visited , result , st)){
                    return {};
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};