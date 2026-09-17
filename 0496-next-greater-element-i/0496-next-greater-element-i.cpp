class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0 ; i < nums1.size() ; i++){
            for(int j = 0 ; j < nums2.size() ; j++){
                bool found = false;
                if(nums1[i] == nums2[j]){
                    int begin = j;
                    int number = nums1[i];
                    for(int x = j + 1; x < nums2.size() ; x++){
                        if(nums2[x] > number){
                            ans.push_back(nums2[x]);
                            found = true;
                            break;
                        }
                    }
                    if(!found){
                        ans.push_back(-1);
                        break;
                    }
                }
            }
        }
        return ans;   
    }
};