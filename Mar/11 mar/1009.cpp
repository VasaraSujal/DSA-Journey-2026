class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        string num = "";
        while(n > 0) {
            num = char(n%2 + '0') + num;
            n /= 2;
        }
        int ans  = 0;
        for(int i=num.size()-1;i>=0;i--) {
            if(num[i] == '0') {
                ans += pow(2, num.size()-i-1);
            }
        }
        return ans;
    }
};