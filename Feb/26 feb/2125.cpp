class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector <string> vec;

        for (int i = 0; i < bank.size(); i++) {
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '0') {
                    continue;
                } else {
                    vec.push_back(bank[i]);
                    break;
                }
            }
        }
        if (vec.size() == 1 || vec.size() == 0) {
            return 0;
        }
        int ans = 0;
        for (int i = 0; i < vec.size() - 1; i++) {
            int count1 = 0, count2 = 0;
            for (int j = 0; j < vec[i].size(); j++) {
                if (vec[i][j] == '1')
                    count1++;
                if (vec[i + 1][j] == '1')
                    count2++;
            }
            ans += count1 * count2;
        }

        return ans;
    }
};