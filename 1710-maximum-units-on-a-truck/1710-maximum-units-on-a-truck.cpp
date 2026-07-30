class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end());
        sort(boxTypes.begin() , boxTypes.end() , [](vector<int> &a , vector<int> &b){
            return a[1] > b[1];
        });
        int answer = 0;
        for(int i = 0 ; i < boxTypes.size() ; i++){
            for(int j = 0 ; j < boxTypes[i].size() -1 ; j++){
                if(boxTypes[i][j] <= truckSize && truckSize != 0){
                    answer += (boxTypes[i][j+1] * boxTypes[i][j]);
                    truckSize -= boxTypes[i][j];
                }else if(boxTypes[i][j] >= truckSize && truckSize != 0){
                    answer += (boxTypes[i][j+1] * truckSize);
                    truckSize = 0;
                }
                
            }
        }
        return answer;
    }
};