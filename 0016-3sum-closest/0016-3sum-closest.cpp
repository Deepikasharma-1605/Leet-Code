class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0;
        vector<int> anss;
        int n = nums.size();
        long long sum = 0;
        sort(nums.begin() , nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            int left = i + 1;
            int right = n-1 ;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(abs(target - sum) < abs(target - closest)){
                    closest = sum;
                }
                if(sum < target){
                    left++;
                }else if(sum > target){
                    right--;
                }else{
                    return sum;
                }
                
            }
        }
        return closest;
    }
};