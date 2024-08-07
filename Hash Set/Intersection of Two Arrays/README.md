```C++
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result1;
        unordered_set<int> result2;
        vector<int> output;

        for(int i = 0; i < nums1.size(); i++){
            if(!result1.contains(nums1[i])){
                result1.insert(nums1[i]);
            }
        }
        for(int i = 0; i < nums2.size(); i++){
            if(!result2.contains(nums2[i])){
                result2.insert(nums2[i]);
            }
        }

        for(const auto& num : result1){
            if(result2.contains(num)){
                output.push_back(num);
            }
        }

        return output;
    }
};
```