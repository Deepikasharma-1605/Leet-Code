class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int x : nums){
            mp[x]++;
        }
        vector<vector<int>> ans;
        for(auto it : mp){
            ans.push_back({it.first , it.second});
        }
        sort(ans.begin(), ans.end(), [](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });
        vector<int> answer;
        int n = ans.size();
        for(int i = n - 1; i >= n - k ; i--){
            answer.push_back(ans[i][0]);
        }
        return answer;
        
    }
};