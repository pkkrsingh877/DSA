```C++
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> result1;
        unordered_map<int, int> result2;
        vector<int> output;

        for(int i = 0; i < nums1.size(); i++){
            result1[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++){
            result2[nums2[i]]++;
        }

        for(const auto& pair : result1){
            if(result2.contains(pair.first)){
                for(int i = 0; i < pair.second && i < result2[pair.first]; i++){
                    output.push_back(pair.first);
                }
            }
        }

        return output;
    }
};
```