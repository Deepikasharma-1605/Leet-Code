class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int x : nums){
            mp[x]++;
        }
        vector<vector<int>> pairs;
        for(auto it: mp){
            pairs.push_back({it.second , it.first});
        }
        sort(pairs.begin() , pairs.end());
        reverse(pairs.begin() , pairs.end());
        vector<int> answer;
        for(int i = 0 ; i < pairs.size() ; i++){
            for(int j = 0 ; j < pairs[i].size() ; j++){
                cout << pairs[i][j];
            }
            cout << endl;
        }
        for(int i = 0 ; i < k ; i++){
            answer.push_back(pairs[i][1]);
        }
        return answer;
    }
};