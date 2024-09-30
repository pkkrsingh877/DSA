```C++
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int prefixSum = 0;

        for(int i = 0; i < gain.size(); i++){
            prefixSum += gain[i];
            if(max < prefixSum){
                max = prefixSum;
            }
        }

        return max;
    } 
};
```