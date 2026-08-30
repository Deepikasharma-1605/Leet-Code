class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        unordered_map<int , int> mp;
        for(int x : nums){
            mp[x]++;
        }
        int ans = 0;
        int n = nums.size();
        for(auto it : mp){
            if(it.second > n / 2){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};