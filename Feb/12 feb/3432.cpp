class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n-1;i++) {
            int leftSum = 0;
            int rightSum = 0;
            for(int j=0;j<=i;j++) {
                leftSum += nums[j];
            }
            cout << leftSum << endl;
            for(int k=i+1;k<n;k++) {
                rightSum += nums[k];
            }
            cout << rightSum << endl;
            cout << rightSum - leftSum << endl;
            if(abs(leftSum - rightSum) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};