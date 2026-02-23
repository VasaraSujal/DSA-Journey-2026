class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        map<int,int> count1, count2;

        for(int i=0;i<nums1.size();i++){
            count1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            count2[nums2[i]]++;
        }

        vector<int> list1;
        for(int i=0;i<nums1.size();i++){
            int val = nums1[i];
            if(count2.find(val) == count2.end()){
                list1.push_back(val);
                count2[val]=1; 
            }
        }
        vector<int> list2;
        for(int i=0;i<nums2.size();i++){
            int val = nums2[i];
            if(count1.find(val) == count1.end()){
                list2.push_back(val);
                count1[val]=1; 
            }
        }
        result.push_back(list1);
        result.push_back(list2);

        return result;
    }
};