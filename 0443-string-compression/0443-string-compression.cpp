class Solution {
public:
    int compress(vector<char>& chars) {

        vector<char> arr;

        int i = 0;

        while (i < chars.size()) {

            char current = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == current) {
                count++;
                i++;
            }

            arr.push_back(current);

            if (count > 1) {
                string s = to_string(count);

                for (char c : s) {
                    arr.push_back(c);
                }
            }
        }

        chars = arr;

        return chars.size();
    }
};