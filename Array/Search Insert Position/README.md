```C++
class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int high, int low){
        if(low > high){
            return low;
        }

        int mid = (high + low)/2;

        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            return binarySearch(nums, target, mid - 1, low);
        }else{
            return binarySearch(nums, target, high, mid + 1);
        }
    }
    int searchInsert(vector<int>& nums, int target){
        int index = binarySearch(nums, target, nums.size() - 1, 0);
        return index;
    }
};
```