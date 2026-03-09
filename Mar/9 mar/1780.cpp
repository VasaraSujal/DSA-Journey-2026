class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n > 0) {
            if(n%3 == 2) return false;
            n /=3;
        }
        if(n == 0 || n == 1) {
            return true;
        }
        return false;
    }
};