class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                int count = 0;
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] == 1) {
                        if (count < k) {
                            return false;
                        }
                        break;
                    }
                    count++;
                }
            }
        }
        return true;
    }
};
