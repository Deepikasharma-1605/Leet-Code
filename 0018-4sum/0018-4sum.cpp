class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0 ; i < n - 3; i++){
            for(int j = i + 1 ; j < n - 2 ; j++){
                int x = j + 1 ;
                int y = n - 1;
                while(x < y){
                    long long sum =(long long) nums[i] + nums[j] + nums[x] + nums[y];
                    if(sum == target){
                        ans.push_back({nums[i] , nums[j] , nums[x] , nums[y]});
                        x++;
                        y--;
                    }else if(sum < target){
                        x++;
                    }else if(sum > target){
                        y--;
                    }
                }
            }
        }
        sort(ans.begin() , ans.end());
        ans.erase(unique(ans.begin() , ans.end()) , ans.end());
        return ans;
    }
};