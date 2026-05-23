class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int next = (i + 1) % n;
            if (nums[i] > nums[next]) {
                count++;
                if (count > 1)
                    return false;
            }
        }
        return true;
    }
};


// int n = nums.size();
// int minIndex = 0;
// for(int i=0;i<n;i++){
//     if(nums[i] < nums[minIndex]){
//         minIndex = i;
//     }
// }
// int index = minIndex;
// for(int i=0;i<n-1;i++){
//     int curr = (minIndex + i) % n;
//     int next = (minIndex + i + 1) % n;

//     if(nums[curr] > nums[next]){
//         return false;
//     }
// }
// return true;