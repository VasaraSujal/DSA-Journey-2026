class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int score1 = 0;
        int score2 = 0;
        bool isActive = true;

        for(int i=0;i<nums.size();i++) {
            if(nums[i] % 2 == 1) {
                isActive = !isActive;
            }
            if((i+1) % 6 == 0) {
                isActive = !isActive;
            }
            if(isActive) {
                score1 += nums[i];
            }else{
                score2 += nums[i];
            }
        }
        return score1 - score2;
    }
};