class Solution {
public:
    void solve(vector<int>& nums , vector<vector<int>> &answer , int index , vector<int> &ans){
        answer.push_back(ans);
        for(int i = index ; i < nums.size() ; i++){
            ans.push_back(nums[i]);
            solve(nums , answer , i + 1 , ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> answer;
        solve(nums , answer , 0 , ans);
        return answer;
        
    }
};