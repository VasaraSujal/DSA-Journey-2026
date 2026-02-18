class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int result = 0;
        if((n*n) * w < maxWeight) {
            result = n*n;
        }else{
            result = maxWeight/w;
        }
        return result;
    }
};