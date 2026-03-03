class Solution {
public:
    char kthCharacter(int k) {

        // Approach - 1 :

        string s = "a";
        while (s.length() < k) {
            string t = s; 
            int n = t.length();
            for (int i = 0; i < n; i++) {
                if (t[i] == 'z')
                    t[i] = 'a';
                else
                    t[i] = t[i] + 1;
            }
            s = s + t;
        }
        return s[k - 1];

        //Approach - 2 :
        int shift = __builtin_popcount(k-1);
        return 'a' + shift;
        
    }
};
