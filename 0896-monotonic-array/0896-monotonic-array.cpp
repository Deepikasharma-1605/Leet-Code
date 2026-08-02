class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        vector<int> arr = nums;      // Original copy

        vector<int> arrAsc = nums;
        sort(arrAsc.begin(), arrAsc.end());

        bool found = true;

        for(int i = 0; i < nums.size(); i++) {
            if(arr[i] != arrAsc[i]) {
                found = false;
                break;
            }
        }

        if(found)
            return true;

        vector<int> arrDesc = nums;
        sort(arrDesc.rbegin(), arrDesc.rend());

        found = true;

        for(int i = 0; i < nums.size(); i++) {
            if(arr[i] != arrDesc[i]) {
                found = false;
                break;
            }
        }

        return found;
    }
};