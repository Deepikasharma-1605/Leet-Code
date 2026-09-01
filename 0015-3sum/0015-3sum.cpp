class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i = 0 ; i < n - 2 ; i++){
            int x = i + 1;
            int y = n - 1;
            while(x < y){
                if(nums[i] + nums[x] + nums[y] == 0){
                    ans.push_back({nums[i] , nums[x] , nums[y]});
                    x++;
                    y--;
                }else if(nums[i] + nums[x] + nums[y] < 0){
                    x++;
                }else if(nums[i] + nums[x] + nums[y] > 0){
                    y--;
                }
            }
        }
        sort(ans.begin() , ans.end());
        ans.erase(unique(ans.begin() , ans.end()) , ans.end());
        return ans;
    }
};