class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest = -1;
        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                int digit = s[i] - '0';
                if(digit > largest) {
                    secondLargest = largest;
                    largest = digit;
                }
                else if(digit < largest && digit > secondLargest) {
                    secondLargest = digit;
                }
            }
        }
        return secondLargest;
    }
};