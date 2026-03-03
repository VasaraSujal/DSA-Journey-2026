class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        if(k == 1) return 'a';

        long long length = 1;
        int n = operations.size();
        long long newK = -1;
        int optype = -1;

        for(int i=0;i<n;i++) {
            length *= 2;
            if(length >= k) {
                optype = operations[i];
                newK = k - (length/2);
                break;
            }
        }

        char ch = kthCharacter(newK, operations);

        if(optype == 0) {
            return ch;
        }else{
            if(ch == 'z') return 'a';
            else{
                return ch + 1;
            }
        }
    }
};