class Solution {
public:
    bool dfs(int node , vector<vector<int>> &adj , vector<bool> &visited , vector<bool> &result ,stack<int> &st){
        visited[node] = true;
        result[node] = true;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour , adj , visited ,result , st)){
                    return true;
                }
            }else if(result[neighbour]){
                return true;
            }
        }
        result[node] = false;
        st.push(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> visited(numCourses , false);
        vector<bool> result(numCourses , false);
        stack<int> st;
        vector<vector<int>> adj(numCourses);
        for(auto it : prerequisites){
            int x = it[0];
            int y = it[1];
            adj[y].push_back(x);
        }
        for(int i = 0 ; i < numCourses ; i++){
            if(!visited[i]){
                if(dfs(i , adj , visited , result , st)){
                    return {};
                }
            }
        }
        vector<int> arr;
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        return arr;
    }
};