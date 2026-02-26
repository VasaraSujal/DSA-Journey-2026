class Solution {
public:
    int numSteps(string s) {
        int n = s.length();
        int ope = 0;
        int carry = 0;
        for(int i = n -1 ; i > 0 ; i--){
            int bit = (s[i] - '0') + carry;

            if(bit == 1){
                ope = ope +2;
                carry = 1;
            }
            else{
                ope = ope +1;
            } 
        }
        if(carry ==1){
            ope = ope +1;
        }
        return ope;
    }
};