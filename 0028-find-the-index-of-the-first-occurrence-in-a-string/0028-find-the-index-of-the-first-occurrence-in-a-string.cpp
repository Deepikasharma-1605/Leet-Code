class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0; 
        int j = 0;
        int start = 0;
        while(i < haystack.length() && j < needle.length()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == needle.size()){
                return start;
                }
            }else{
                start++;
                i = start;
                j = 0;
            }
        }
        return -1;
    }
};