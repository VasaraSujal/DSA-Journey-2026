class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // int first = nums[0];
        // nums.erase(nums.begin());
        // sort(nums.begin(), nums.end());

        // return first + nums[0] + nums[1];

        int min1 = 100; 
        int min2 = 100;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < min1){
                min2 = min1;
                min1 = nums[i];
            }
            else if(nums[i] < min2){
                min2 = nums[i];
            }
        }
        return nums[0] + min1 + min2;
    }
};
