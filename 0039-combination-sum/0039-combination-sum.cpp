class Solution {
public:
    void solve(vector<int>& candidates, int target , vector<int> &ans ,vector<vector<int>> &answer , int index){
        if(target == 0){
            answer.push_back(ans);
            return;
        }
        if(target < 0) return;
        for(int i = index ; i < candidates.size() ; i++){
            ans.push_back(candidates[i]);
            solve(candidates , target - candidates[i] , ans , answer , i);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> answer;
        solve(candidates , target , ans , answer , 0);
        return answer;
    }
};