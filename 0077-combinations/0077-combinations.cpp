class Solution {
public:
    void solve(int n, int k , vector<int> &ans , int index , vector<int> &num , vector<vector<int>> &nums){
        if(num.size() == k){
            nums.push_back(num);
            return;
        }
        for(int i = index ; i < ans.size() ; i++){
            num.push_back(ans[i]);
            solve(n , k , ans , i + 1 , num , nums);
            num.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> num ;
        vector<vector<int>> nums;
        vector<int> ans;
        for(int i = 1 ; i <= n ; i++){
            ans.push_back(i);
        }
        solve(n , k , ans , 0 , num , nums);
        return nums;
    }
};