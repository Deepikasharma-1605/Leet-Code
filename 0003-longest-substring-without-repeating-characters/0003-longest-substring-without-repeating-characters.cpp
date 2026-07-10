class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int start = 0;
        int length = 0;
        for(int end = 0 ; end < s.length() ; end++){
            while(st.count(s[end])){
                st.erase(s[start]);
                start++;
            }
            st.insert(s[end]);
            length = max(length , (end - start) + 1);

        }
        return length;
        
        
    }
};