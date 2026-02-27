class Solution {
public:
    int minOperations(int n) {
        int count = 0;
        int start = 1;
        int end = (2*(n-1) + 1);
        int mid = (end + start) / 2;
        for(int i=1;i<=mid;i+=2) {
            count += (mid - i);
        }
        return count;
    }
};