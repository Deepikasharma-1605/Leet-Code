class Solution {
public:
    void solve(vector<int> &nums , vector<vector<int>> &answer , int index ){
        if(index == nums.size()){
            answer.push_back(nums);
            return;
        }
        unordered_set<int> used;
        for(int i = index ; i < nums.size() ; i++){
            if(used.count(nums[i])) continue;
            used.insert(nums[i]);
            swap(nums[index] , nums[i]);
            solve(nums , answer , index + 1);
            swap(nums[index] , nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> answer;
        solve(nums , answer , 0);
        return answer;
    }
};