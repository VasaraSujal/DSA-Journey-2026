class Solution {
public:
    int minPartitions(string n) {

        // Approach : 1

        int count = 0;
        while (true) {
            bool changed = false;
            for (int i = 0; i < n.length(); i++) {
                if (n[i] != '0') {
                    n[i]--;
                    changed = true;
                }
            }
            if (!changed)
                break;
            count++;
        }
        return count;

        // Approach 2 :
        
        // char max = *max_element(begin(n), end(n));
        // return max - '0';
        
    }
};