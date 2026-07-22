class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int val;
        for(int i = 0 ; i < nums1.size() ; i++){
            val = nums1[i];
            ans.push_back(val);
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            val = nums2[i];
            ans.push_back(val);
        }
        sort(ans.begin() , ans.end());
        double median = 0.0;
        int n = ans.size();
        for(int i = 0 ; i < n ; i++){
            if(n % 2 != 0){
                median = ans[n/2];

            }else{
                median = (ans[(n-1)/2] + ans[n/2])/2.0;
            }
        }
        return median;
    }
};