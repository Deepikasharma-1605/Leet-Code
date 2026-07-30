class Solution {
public:
    void solve(vector<int>& nums , int index ,vector<vector<int>>& answer,vector<int>& ans){
        if(index == nums.size()){
            answer.push_back(ans);
            return;
        }
        ans.push_back(nums[index]);
        solve(nums , index+1 , answer , ans);
        ans.pop_back();
        solve(nums , index + 1 , answer , ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ans;
        solve(nums , 0 , answer , ans);
        return answer;
        
    }
};