class Solution {
public:
    void solve(vector<int>& nums , int index ,vector<vector<int>>& answer,vector<int>& ans){
        answer.push_back(ans);
        for(int i = index ; i < nums.size() ; i++){
            ans.push_back(nums[i]);
            solve(nums , i+1 , answer , ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ans;
        solve(nums , 0 , answer , ans);
        return answer;
        
    }
};