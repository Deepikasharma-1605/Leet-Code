class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int maxi = 1;
        if(nums.size() == 0) return 0;
        sort(nums.begin() , nums.end());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i - 1] == nums[i]){
                continue;
            }else if(nums[i - 1] + 1 == nums[i]){
                count++;
            }else{
                count = 1;
            }
            maxi = max(count , maxi);
        }
        return maxi;
    }
};