```C++
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> elementCount;
        for(int num : nums){
            elementCount[num]++;
        }
        int maxFreq = INT_MIN;
        for(const auto& elements : elementCount){
            if(maxFreq < elements.second){
                maxFreq = elements.second;
            }
        }
        int sumMaxFreq = 0;
        for(const auto& elements : elementCount){
            if(maxFreq == elements.second){
                sumMaxFreq += elements.second;
            }
        }
        return sumMaxFreq;
    }
};
```