class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people, 0);
        int give = 1;
        int index = 0;
        while (candies > 0) {
            int curr = min(give, candies);
            result[index] += curr;
            candies -= curr;
            give++;
            index = (index + 1) % num_people;
        }
        return result;
    }
};
