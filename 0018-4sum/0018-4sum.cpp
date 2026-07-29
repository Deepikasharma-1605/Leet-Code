class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i = 0 ; i < n - 3 ; i++){
            
                for(int j = i + 1; j < n - 2 ; j++){
                int left = j + 1;
                int right = n - 1;
                while(left < right){
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if(sum == target){
                    ans.push_back({nums[i] , nums[j] , nums[left] , nums[right]});
                    left++;
                    right--;
                }else if(sum < target){
                    left++;
                }else{
                    right--;
                }
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};