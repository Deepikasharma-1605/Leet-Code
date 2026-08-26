class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        vector<int> ans(n);
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        
        for(int i = 0 ; i < arr1.size() ; i++){
            ans[2 * i] = arr1[i];
        }
        for(int j = 0 ; j < arr1.size() ; j++){
            ans[2 * j + 1] = arr2[j];
        }
        return ans;
    }
};