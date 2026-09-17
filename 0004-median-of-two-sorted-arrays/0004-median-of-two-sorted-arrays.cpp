class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int x : nums1){
            ans.push_back(x);
        }
        for(int y : nums2){
            ans.push_back(y);
        }
        sort(ans.begin() , ans.end());
        double median = 0.0;
        int n = ans.size();
        for(int i = 0 ; i < ans.size() ; i++){
            if(n > 1 && n % 2 == 0){
                median = ((ans[n / 2]) + (ans[(n - 1) / 2]))/ 2.0;
            }else{
                median = ans[n / 2];
            }
        }
        return median;
    }
};