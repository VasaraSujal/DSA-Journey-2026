class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maximum = 0;
        for (string s : strs) {
            bool isNumber = true;
            for (char ch : s) {
                if (!isdigit(ch)) {
                    isNumber = false;
                    break;
                }
            }
            if (isNumber) {
                maximum = max(maximum, stoi(s));
            }
            else {
                maximum = max(maximum, (int)s.length());
            }
        }
        return maximum;
    }
};
