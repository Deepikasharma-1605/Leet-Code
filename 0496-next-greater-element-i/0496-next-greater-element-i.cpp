class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for(int i = 0 ; i < nums1.size() ; i++){
            bool found = false;
            bool start = false;
            for(int j = 0 ; j < nums2.size() ; j++){
                if(nums1[i] == nums2[j]){
                    start = true;
                    continue;
                }
                if(start && nums1[i] < nums2[j]){
                    found = true;
                    ans.push_back(nums2[j]);
                    break;
                }
                
            }
            if(!found){
                ans.push_back(-1);
            }
        }
        return ans;
        
    }
};