class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(char c : word1){
            mp1[c]++;
        }
        for(char c : word2){
            mp2[c]++;
        }

        for(auto &p : mp1){
            if(mp2.find(p.first) == mp2.end()) return false;
        }
        for(auto &p : mp2){
            if(mp1.find(p.first) == mp1.end()) return false;
        }

        vector<int> v1;
        vector<int> v2;

        for(auto &i : mp1) {
            v1.push_back(i.second);
        }
        for(auto &i : mp2) {
            v2.push_back(i.second);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        return v1 == v2;
    }
};