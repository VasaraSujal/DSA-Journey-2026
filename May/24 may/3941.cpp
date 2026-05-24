class Solution {
public:
    int passwordStrength(string password) {

        unordered_set<char> unique(password.begin(), password.end());

        int strength = 0;

        for (char c : unique) {
            if (c >= 'a' && c <= 'z')
                strength += 1;
            else if (c >= 'A' && c <= 'Z')
                strength += 2;
            else if (c >= '0' && c <= '9')
                strength += 3;
            else
                strength += 5;
        }

        return strength;
    }
};