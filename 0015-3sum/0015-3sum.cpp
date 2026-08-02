class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i = 0 ; i < n - 2 ; i++){
            if(i > n && nums[i] == nums[i-1]){
                continue;
            }
            int x = i + 1;
            int y = n -1;
            while(x < y){
                if(nums[i] + nums[x] + nums[y] == 0){
                    answer.push_back({nums[i] , nums[x] , nums[y]});
                    x++;
                    y--;
                }else if(nums[i] + nums[x] + nums[y] < 0){
                    x++;
                }else{
                    y--;
                }
            }
        }
        sort(answer.begin() , answer.end());
        answer.erase(unique(answer.begin() , answer.end()) , answer.end());
        return answer;
    }
};