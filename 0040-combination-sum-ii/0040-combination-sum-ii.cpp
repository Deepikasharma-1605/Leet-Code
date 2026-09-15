class Solution {
public:
    void solve(vector<int> &candidates , int target , vector<vector<int>> &answer , vector<int> &ans , int index){
        if(target == 0){
            answer.push_back(ans);
            return;
        }
        for(int i = index ; i < candidates.size(); i++){
            if(i > index && candidates[i] == candidates[i - 1]){
                continue;
            }
            if(target < 0){
                return ;
            }
            ans.push_back(candidates[i]);
            solve(candidates , target - candidates[i] , answer , ans , i + 1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<int> ans;
        vector<vector<int>> answer;
        solve(candidates , target , answer , ans , 0);
        sort(answer.begin() , answer.end());
        answer.erase(unique(answer.begin() , answer.end()) , answer.end());
        return answer;
    }
};