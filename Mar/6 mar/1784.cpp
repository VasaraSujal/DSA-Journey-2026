class Solution {
public:
    bool checkOnesSegment(string s) {

        // Approach : 1 
        
        int n = s.length();
        int first = -1;
        for(int i=0;i<n;i++) {
            if(s[i] == '0') {
                first = i;
                break;
            }
        }

        cout << first << endl;

        if(first == -1) return true;
        if(first+1 == s.length()) return true;

        for(int j=first;j<n;j++) {
            if(s[j] == '1') {
                return false;
            }
        }
        return true;

        // Approach : 2

        return s.find("01") == s.npos;

        // Approach : 3

        bool gotZero = false;
        for (int i = 0 ; i < s.size() ; i++) {
            if (s[i] == '0') {
                gotZero = true;
            }
            if (s[i] == '1' && gotZero) {
                return false;
            }
        }
        return true;
    }
};