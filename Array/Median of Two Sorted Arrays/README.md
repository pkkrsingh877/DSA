```C++
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        vector<int> merged(size);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        double result;
        if(merged.size() % 2 == 0){
            result = (merged[merged.size()/2] + merged[merged.size()/2 - 1])/2.0;
        }else{
            result = merged[int(merged.size()/2)];
        }

        return result;
    }
};
```