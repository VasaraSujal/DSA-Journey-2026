class Solution {
public:
    int minimumOR(vector<vector<int>>& grid) {
        int m = grid.size();
        int ans = 0;
        int temp = 0;
        for(int bit = 16;bit >= 0;bit--) {
            int mask = temp | (1 << bit);
            bool ok = true;
            for(int i=0;i<m && ok;i++) {
                bool found = false;
                for(int val : grid[i]) {
                    if((val & mask) == 0) {
                    found = true;
                        break;
                    }
                }
                if(!found) {
                    ok = false;
                }
            }
            if(ok) {
                temp = mask;
            }else{
                ans |= (1 << bit);
            }
        }
        return ans;
    }
};