class Solution {
public:
    void solve(vector<int> &nums , int k , int n , vector<int> &ans , vector<vector<int>> &answer , int index ){
        if(n == 0 && ans.size() == k){
            answer.push_back(ans);
            return;
        }
        if(n < 0){
            return;
        }
        for(int i = index ; i < nums.size() ; i++){
            ans.push_back(nums[i]);
            solve(nums , k , n - nums[i], ans , answer , i + 1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i = 1 ; i <= 9 ; i++){
            nums.push_back(i);
        }
        vector<int> ans;
        vector<vector<int>> answer;
        solve(nums , k , n , ans , answer , 0);
        
        return answer;
    }
};