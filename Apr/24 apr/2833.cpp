class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int maxCount = INT_MIN;
        int Lcount = 0;
        int Rcount = 0;
        int sum = 0;
        for(int i=0;i<moves.length();i++) {
            if(moves[i] == '_') {
                sum--;
            }

            if(moves[i] == 'L') sum--;
            if(moves[i] == 'R') sum++;
        }
        Lcount = abs(sum);
        sum = 0;

        for(int i=0;i<moves.length();i++) {
            if(moves[i] == '_') {
                sum++;
            }

            if(moves[i] == 'L') sum--;
            if(moves[i] == 'R') sum++;
        }
        Rcount = abs(sum);

        maxCount = max(Lcount, Rcount);

        return maxCount;
    }
};