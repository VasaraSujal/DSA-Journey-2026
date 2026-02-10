class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = -1;
        string word = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (isdigit(word[0])) {
                    int num = stoi(word);
                    if (num <= prev) {
                        return false;
                    }
                    prev = num;
                }
                word = "";
            }
        }
        if (!word.empty() && isdigit(word[0])) {
            int num = stoi(word);
            if (num <= prev) {
                return false;
            }
        }
        return true;
    }
};