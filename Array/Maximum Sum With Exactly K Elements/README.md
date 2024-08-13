```C++
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        while(k){
            int last = nums[nums.size() - 1];
            sum += last;
            nums.pop_back();
            nums.push_back(last + 1);
            k--;
        }

        return sum;
    }
};
```