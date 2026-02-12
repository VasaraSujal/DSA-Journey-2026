class Solution {
public:
    int longestBalanced(string s) {
        int ans = 1;
        for(int i=0;i<s.length();i++) {
            unordered_map<char, int> mp;
            for(int j=i;j<s.length();j++) {
                mp[s[j]]++;
                int freq = -1;
                bool temp = true;
                for(auto &p : mp) {
                    if(freq == -1) {
                        freq = p.second;
                    }else if(freq != p.second){
                        temp = false;
                        break;
                    }
                }
                if(temp) {
                    ans = max(ans, j-i+1);
                }
            }
        }
        return ans;
    }
};