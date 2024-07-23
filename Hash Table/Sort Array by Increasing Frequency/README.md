```C++
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> frequencyCount;
        for(int num : nums){
            frequencyCount[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int first, int second) {
            if (frequencyCount[first] != frequencyCount[second]) {
                return frequencyCount[first] < frequencyCount[second];
            }
            return first > second;
        });

        return nums;
    }
};
```