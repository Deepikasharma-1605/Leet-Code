class Solution {
public:
    void solve(vector<int> &candidates , int target ,vector<int> &num , vector<vector<int>> &nums , int index){
        if(target == 0){
            nums.push_back(num);
            return;
        }
        for(int i = index ; i < candidates.size() ; i++){
            if(i > index && candidates[i] == candidates[i-1]){
                continue;
            }
            if(candidates[i] > target){
                return;
            }
            num.push_back(candidates[i]);
            solve(candidates , target - candidates[i] , num , nums , i +1);
            num.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<int> num;
        vector<vector<int>> nums;
        solve(candidates , target , num , nums , 0);
        return nums;
        
    }
};