```C++
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);
        unordered_set<int> seen;
        for(int i = 0; i < nums1.size(); i++){
            int found = 0;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    found = 1;
                }
            }
            if(found == 0 && !(seen.find(nums1[i]) != seen.end())){
                result[0].push_back(nums1[i]);
                seen.insert(nums1[i]);
            }
        }
        seen = {};
        for(int i = 0; i < nums2.size(); i++){
            int found = 0;
            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    found = 1;
                }
            }
            if(found == 0 && !(seen.find(nums2[i]) != seen.end())){
                result[1].push_back(nums2[i]);
                seen.insert(nums2[i]);
            }
        }
        return result;
    }
};
```