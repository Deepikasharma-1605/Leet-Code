class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> answer;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n - 3 ; i++){
            for(int j = i + 1 ; j < n - 2 ; j++){
                int x = j + 1 ;
                int y = n - 1;
                while(x < y){
                    long long ans = (long long)nums[i] + nums[j] + nums[x] + nums[y];
                    if(ans == target){
                        answer.push_back({nums[i] , nums[j] , nums[x] , nums[y]});
                        x++;
                        y--;
                    }else if(ans < target){
                        x++;

                    }else{
                        y--;
                    }
                }
            }
        }
        sort(answer.begin() , answer.end());
        answer.erase(unique(answer.begin() , answer.end()) , answer.end());
        return answer;
    }
};