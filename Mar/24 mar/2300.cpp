class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        

        for(int i=0;i<spells.size();i++) {
            int left = 0;
            int right = potions.size() - 1;
            int index = potions.size();
            while(left <= right) {
                int mid = left + (right-left)/2;
                if((long long)spells[i] * potions[mid] >= success) {
                    index = mid;
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }
            spells[i] = potions.size() - index;
        }
        return spells;
    }
};