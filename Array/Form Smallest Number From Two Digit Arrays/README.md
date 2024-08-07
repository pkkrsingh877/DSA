```C++
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> table;
        int min1 = INT_MAX;
        for(int i = 0; i < nums1.size(); i++){
            table[nums1[i]]++;

            if(min1 > nums1[i]){
                min1 = nums1[i];
            }
        }
        int min2 = INT_MAX;
        for(int i = 0; i < nums2.size(); i++){
            table[nums2[i]]++;

            if(min2 > nums2[i]){
                min2 = nums2[i];
            }
        }

        int minInHash = INT_MAX;
        for(const auto& pair : table){
            if(pair.second == 2){
                if(minInHash > pair.first){
                    minInHash = pair.first;
                }
            }
        }

        if(minInHash >= 0 && minInHash <= 9){
            return minInHash;
        }else if(min1 < min2){
            return min1 * 10 + min2;
        }
        return min2 * 10 + min1;
    }
};
```