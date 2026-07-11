class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> x1(26 , 0);
        vector<int> x2(26 , 0);
        int j = 0;
        for(char c : s1){
            x1[c - 'a']++;
        }
        int k = s1.length();
        for(int i = 0 ; i < s2.length() ; i++){
            x2[s2[i] - 'a']++;
            if(i >= k){
                x2[s2[i-k]-'a']--;

            }
            if(x1 == x2){
            return true;
        }
            
        }
        
            return false;
        
        
    }
};