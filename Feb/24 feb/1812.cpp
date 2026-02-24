class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // return (coordinates[0] + coordinates[1]) % 2!=0;

        int ch = coordinates[0]-97;
        int num = coordinates[1]-48;

        return (ch+num)%2 == 0;
    }
};