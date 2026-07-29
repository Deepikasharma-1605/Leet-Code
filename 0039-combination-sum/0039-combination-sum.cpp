class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index ,vector<int>& candidates, int target , vector<int>& num){
        if(target == 0){
            ans.push_back(num);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = index ; i < candidates.size() ; i++){
            num.push_back(candidates[i]);
            solve(i , candidates , target - candidates[i] , num);
            num.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> num;
        solve(0 ,candidates , target , num);
        return ans;
    }
};