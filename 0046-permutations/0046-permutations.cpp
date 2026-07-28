class Solution {
public:
    vector<vector<int>> answer;
    void solve(vector<int>& nums , int index){
        if(index == nums.size()){
            answer.push_back(nums);
            return;
        }
        for(int i = index ; i < nums.size() ; i++){
            swap(nums[index] , nums[i]);
            solve(nums, index + 1);
            swap(nums[index] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums , 0);
        return answer;
    }
};