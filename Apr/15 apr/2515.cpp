class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int leftDis = INT_MAX;
        int rightDis = INT_MAX;

        for(int step = 0; step < n; step++) {
            int i = (startIndex - step + n) % n;
            if(words[i] == target) {
                leftDis = step;
                break;
            }
        }

        for(int step = 0; step < n; step++) {
            int i = (startIndex + step) % n;
            if(words[i] == target) {
                rightDis = step;
                break;
            }
        }

        int minDistance = min(leftDis, rightDis);

        return (minDistance == INT_MAX) ? -1 : minDistance;
    }
};