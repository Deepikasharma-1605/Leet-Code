class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int waterfilled;
        int maxfilled = 0;
        int right = 0;
        int left = n - 1;
        while(right < left){
            int k = min(height[right] , height[left]);
            waterfilled = k * ( left - right );
            if(height[right] < height[left]){
                right++;
            }else{
                left--;
            }
            if(waterfilled > maxfilled){
                maxfilled = waterfilled;
            }


        }
        return maxfilled;
    }
};