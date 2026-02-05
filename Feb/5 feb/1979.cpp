class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int minimum = nums[0];
        int maximum = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            minimum = min(minimum, nums[i]);
            maximum = max(maximum, nums[i]);
        }
        return gcd(minimum, maximum);
    }
};
