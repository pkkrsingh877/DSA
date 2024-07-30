```C++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> set;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(set.find(nums[i]) == set.end()){
                set.insert(nums[i]);
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};
```