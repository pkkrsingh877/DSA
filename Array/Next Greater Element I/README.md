```C++
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int num : nums1){
            bool hasBeenFound = false;
            bool hasBeenPushed = false;
            int nextGreaterElement = INT_MIN;
            for(int i = 0; i < nums2.size(); i++){
                if(num == nums2[i]){
                    hasBeenFound = true;
                }
                if(hasBeenFound && num < nums2[i]){
                    nextGreaterElement = nums2[i];
                    result.push_back(nextGreaterElement);
                    hasBeenPushed = true;
                    break;
                }
            }
            if(hasBeenFound && !hasBeenPushed){
                result.push_back(-1);
            }
        }
        return result;
    }
};
```