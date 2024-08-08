```C++
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> unique;
        unordered_map<int, int> table;
        for(int num : arr){
            table[num]++;
        }
        for(const auto& pair : table){
            if(!unique.contains(pair.second)){
                unique.insert(pair.second);
            }else{
                return false;
            }
        }

        return true;
    }
};
```