class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        unordered_map<char , int> st;
        int length = 0;
        for(int end = 0 ; end < s.length() ; end++){
            while(st.count(s[end])){
                st.erase(s[start]);
                start++;
            }
            st[s[end]] = 1;
            length = max(length , end - start + 1);
        }
        return length;
    }
};