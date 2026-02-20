class Solution {
public:
    string greatestLetter(string s) {
        string result = "";
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                upper[s[i] - 'A'] = 1;
            } 
            else if(s[i] >= 'a' && s[i] <= 'z') {
                lower[s[i] - 'a'] = 1;
            }
        }
        
        for(int i = 25; i >= 0; i--) {
            if(lower[i] && upper[i]) {
                result += i + 'A';
                break;
            }
        }
        
        return result;
    }
};