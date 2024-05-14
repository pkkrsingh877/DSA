# Contains Duplicates

- Create an Hash Set named seen
- for num in nums array
    - If seen has num 
        - Then return true // Means duplicate is there
    - Insert num in seen // Means seen now has num in it
- return false // Because we traversed the array and could not find duplicates

```C++
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
```