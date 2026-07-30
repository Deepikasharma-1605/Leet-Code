class Solution {
public:
    void solve(vector<int>& candidates, int target , int index, vector<int> &ans , vector<vector<int>> &answer){
        if(target == 0){
            answer.push_back(ans);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = index ; i < candidates.size() ; i++){
            ans.push_back(candidates[i]);
            solve(candidates , target - candidates[i] , i , ans , answer);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> answer;
        solve(candidates , target , 0 , ans , answer);
        return answer;
    }
};