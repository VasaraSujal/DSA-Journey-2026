class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long totalSum = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                totalSum += grid[i][j];
            }
        }

        if(totalSum % 2 != 0) return false;

        totalSum /= 2;

        long long currSum = 0;
        for(int i=0;i<grid.size()-1;i++) {
            for(int j=0;j<grid[0].size();j++) {
                currSum += grid[i][j];
            }

            if(totalSum == currSum) {
                return true;
            }else if(currSum > totalSum) {
                break;
            }
        }

        currSum = 0;
        for(int i=0;i<grid[0].size()-1;i++) {
            for(int j=0;j<grid.size();j++) {
                currSum += grid[j][i];
            }

            if(currSum == totalSum) {
                return true;
            }else if(currSum > totalSum) {
                break;
            }
        }
        return false;
    }
};