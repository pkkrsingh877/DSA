```C++
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        vector<int> kFrequentElements;

        for(int num : nums){
            table[num]++;
        }

        vector<pair<int, int>> frequencyVector;

        for(const auto& pair : table){
            frequencyVector.push_back({pair.second, pair.first});
        }

        sort(frequencyVector.begin(), frequencyVector.end(), greater<pair<int, int>>());

        for(const auto& pair : frequencyVector){
            kFrequentElements.push_back(pair.second);
            k--;
            if(k == 0){
                break;
            }
        }

        return kFrequentElements;
    }
};
```