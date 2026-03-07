class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;

        for(int i=0;i<n;) {
            int ch = chars[i];
            int count = 0;

            while(i < n && chars[i] == ch) {
                i++;
                count++;
            }

            chars[index++] = ch;

            if(count > 1) {
                string s = to_string(count);
                for(char c : s) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};